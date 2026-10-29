import pandas as pd
import numpy as np

df = pd.read_csv("test.csv")
ages = df["Age"].dropna().to_numpy()
fares = df["Fare"].dropna().to_numpy()

print("Mean age:", round(np.mean(ages), 2))
print("Median age:", round(np.median(ages), 2))
print("Youngest age:", np.min(ages))
print("Oldest age:", np.max(ages))
print("Mean fare:", round(np.mean(fares), 2))
