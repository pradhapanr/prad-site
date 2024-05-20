import pandas as pd
import matplotlib.pyplot as plt

# Read data from parallel_perf.csv
df_parallel = pd.read_csv('../parallel_perf.csv')

# Read data from serial_perf.csv
df_serial = pd.read_csv('../serial_perf.csv')

# Plot
plt.figure(figsize=(10, 6))

# Group and plot parallel data
for name, group in df_parallel.groupby('multithread_threshold'):
    plt.plot(group['order'], group['time'], marker='o', label=f'Parallel Threshold {name}')

# Group and plot serial data
for name, group in df_serial.groupby('multithread_threshold'):
    plt.plot(group['order'], group['time'], marker='x', linestyle='--', label=f'Serial Threshold {name}')

plt.xscale('log', base=2)  # Set x-axis to log scale
plt.yscale('log')           # Set y-axis to log scale
plt.xlabel('Order (Powers of 2)')
plt.ylabel('Time (ms)')
plt.title('Multithread Threshold vs Time (Parallel vs Serial)')
plt.legend()
plt.grid(True)
plt.show()
