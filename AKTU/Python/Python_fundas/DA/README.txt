DA classroom programs
====================

Dataset
-------
test.csv is the Titanic passenger test dataset used by programs 01-05 and the analysis notebooks. Keep it in this folder. It contains 418 rows and 11 columns, but no Survived field; it cannot be used to calculate survival rates.

Set up Python
-------------
Run these commands from this folder on Windows:
    py -m venv .venv
    .venv\Scripts\python.exe -m pip install -r requirements.txt
    .venv\Scripts\python.exe -m ipykernel install --user --name da-project --display-name "Python (DA Project)"

Open a notebook in Jupyter and select the Python (DA Project) kernel. The virtual environment keeps the project libraries together. Run a script from this folder with:
    .venv\Scripts\python.exe 01_inspect_dataset.py

Programs
--------
Programs 01-05 inspect and analyze test.csv. Programs 06-07 create and analyze simulated IoT sensor readings; run 06 before 07. Program 06 writes sensor_readings.csv in the current working folder.

Notebooks
---------
CSV_Matplotlib_IoT_Data_Analysis.ipynb
NumPy_Extensive_Array_Operations.ipynb
Pandas_NumPy_Matplotlib_Data_Analysis.ipynb
Titanic_CSV_Data_Analysis_NumPy_Matplotlib.ipynb

The CSV analysis notebooks look for test.csv in the current working folder or a DA subfolder.
