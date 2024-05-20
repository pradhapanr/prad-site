import pandas as pd

df = pd.read_csv('output.csv')

cuda_fast_df = df[df['Execution Type'] == 'cuda (fast!)']

average_times = cuda_fast_df.groupby('Block Size')['Time (ms)'].mean()

fastest_block_size = average_times.idxmin()

fastest_average_time = average_times.min()

degree_2_11 = cuda_fast_df[(cuda_fast_df['Degree'] == 2048) & (cuda_fast_df['Block Size'] == fastest_block_size)]
degree_2_15 = cuda_fast_df[(cuda_fast_df['Degree'] == 32768) & (cuda_fast_df['Block Size'] == fastest_block_size)]

print(f"The block size with the fastest average time for CUDA (fast!) is {fastest_block_size} with an average time of {fastest_average_time} ms.")
print(f"Additional information for degree 2^11 and 2^15 (CUDA fast!):")
print("Degree 2^11:")
print(degree_2_11)
print("Degree 2^15:")
print(degree_2_15)
