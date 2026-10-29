import pandas as pd
import matplotlib.pyplot as plt

df = pd.read_csv("test.csv")
groups = [df.loc[df["Pclass"] == c, "Fare"].dropna() for c in [1, 2, 3]]
plt.boxplot(groups)
plt.xticks([1, 2, 3], ["1st", "2nd", "3rd"])
plt.title("Fare Distribution by Ticket Class")
plt.xlabel("Ticket class")
plt.ylabel("Fare")
plt.tight_layout()
plt.show()


