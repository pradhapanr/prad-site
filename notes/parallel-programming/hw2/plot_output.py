import pandas as pd
import matplotlib.pyplot as plt

# Read the CSV file into a DataFrame
df = pd.read_csv('output.csv')

# Get unique block sizes
block_sizes = df['Block Size'].unique()

# Filter CPU data for block size 0
cpu_block_0 = df[(df['Block Size'] == 0) & (df['Execution Type'] == 'cpu')]

# Plot for each block size
for block_size in block_sizes:
    # Filter data for the current block size
    block_df = df[df['Block Size'] == block_size]
    
    # Separate data for each execution type
    cpu_data = cpu_block_0 if block_size == 0 else block_df[block_df['Execution Type'] == 'cpu']
    naive_data = block_df[block_df['Execution Type'] == 'cuda (naive)']
    fast_data = block_df[block_df['Execution Type'] == 'cuda (fast!)']
    
    # Plot
    plt.figure()
    plt.plot(cpu_data['Degree'], cpu_data['Time (ms)'], label='CPU')
    plt.plot(naive_data['Degree'], naive_data['Time (ms)'], label='CUDA (naive)')
    plt.plot(fast_data['Degree'], fast_data['Time (ms)'], label='CUDA (fast!)')
    
    plt.title(f'Block Size {block_size}')
    plt.xlabel('Degree')
    plt.ylabel('Time (ms)')
    plt.legend()
    plt.grid(True)
    plt.show()
