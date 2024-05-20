import csv
import re

def parse_data(data):
    parsed_data = []
    for line in data:
        match = re.match(r'\[(.*?)\]\s+degree:\s+(\d+),\s+time:\s+(\d+(\.\d+)?)\s*(ms)?', line)
        if match:
            execution_type = match.group(1)
            degree = int(match.group(2))
            time = float(match.group(3))
            parsed_data.append((execution_type, degree, 0, time))
        else:
            match = re.match(r'\[(.*?)\]\s+degree:\s+(\d+),\s+block size:\s+(\d+),\s+time:\s+(\d+(\.\d+)?)\s*(ms)?', line)
            if match:
                execution_type = match.group(1)
                degree = int(match.group(2))
                block_size = int(match.group(3))
                time = float(match.group(4))
                parsed_data.append((f"{execution_type}", degree, block_size, time))
    return parsed_data

def write_to_csv(data, filename):
    with open(filename, 'w', newline='') as csvfile:
        writer = csv.writer(csvfile)
        writer.writerow(["Execution Type", "Degree", "Block Size", "Time (ms)"])
        for item in data:
            writer.writerow(item)

def main():
    with open('output.txt', 'r') as file:
        data = file.readlines()
    parsed_data = parse_data(data)
    write_to_csv(parsed_data, 'output.csv')

if __name__ == '__main__':
    main()