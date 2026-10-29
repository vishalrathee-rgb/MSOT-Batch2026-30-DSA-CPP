import pandas as pd
import matplotlib.pyplot as plt

df = pd.read_csv("test.csv")
ages = df["Age"].dropna()
plt.hist(ages, bins=18, edgecolor="black")
plt.title("Age Distribution")
plt.xlabel("Age (years)")
plt.ylabel("Number of passengers")
plt.tight_layout()
plt.show()
