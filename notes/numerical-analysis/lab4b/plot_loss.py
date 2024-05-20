import pandas as pd
import matplotlib.pyplot as plt

# Read the CSV file into a DataFrame
df = pd.read_csv('dopri_loss.csv')

# Plot the data
plt.plot(df['iteration'], df['loss'], marker='o', linestyle='-')
plt.title('Loss vs Iteration')
plt.xlabel('Iteration')
plt.ylabel('Loss')
plt.grid(True)

# Save the plot as a PNG file
plt.savefig('dopri_loss.png')

# Show the plot (optional)
plt.show()
