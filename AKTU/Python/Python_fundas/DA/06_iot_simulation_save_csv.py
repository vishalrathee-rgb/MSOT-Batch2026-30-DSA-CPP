import csv

readings = [
    ("09:00", 24.5), ("10:00", 25.2),
    ("11:00", 26.1), ("12:00", 27.4),
    ("13:00", 27.0)
]
with open("sensor_readings.csv", "w", newline="") as f:
    writer = csv.writer(f)
    writer.writerow(["time", "temperature"])
    writer.writerows(readings)
print("Saved", len(readings), "readings.")
