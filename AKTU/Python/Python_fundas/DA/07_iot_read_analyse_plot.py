import csv
import numpy as np
import matplotlib.pyplot as plt

times, temps = [], []
with open("sensor_readings.csv", newline="") as f:
    for row in csv.DictReader(f):
        times.append(row["time"])
        temps.append(float(row["temperature"]))

values = np.array(temps)
print("Mean temperature:", round(np.mean(values), 2), "°C")
plt.plot(times, values, marker="o")
plt.axhline(np.mean(values), linestyle="--", label="Mean")
plt.title("Simulated IoT Temperature")
plt.xlabel("Time")
plt.ylabel("Temperature (°C)")
plt.grid(True)
plt.legend()
plt.tight_layout()
plt.show()
