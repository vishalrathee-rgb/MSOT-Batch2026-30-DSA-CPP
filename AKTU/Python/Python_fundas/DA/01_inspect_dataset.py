import pandas as pd

df = pd.read_csv("test.csv")
print(df.head())
print("Rows and columns:", df.shape)
print("Columns:", df.columns.tolist())
print("\nMissing values by column:")
print(df.isnull().sum())
