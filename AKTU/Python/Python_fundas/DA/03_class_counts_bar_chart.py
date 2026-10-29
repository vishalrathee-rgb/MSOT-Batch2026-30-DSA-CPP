import pandas as pd
import matplotlib.pyplot as plt

df = pd.read_csv("test.csv")
counts = df["Pclass"].value_counts().sort_index()
counts.plot(kind="bar")
plt.title("Passenger Records by Ticket Class")
plt.xlabel("Ticket class")
plt.ylabel("Number of records")
plt.xticks(rotation=0)
plt.tight_layout()
plt.show()
