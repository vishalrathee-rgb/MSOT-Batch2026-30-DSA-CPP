# MSOT Batch 2026–30: Programming, DSA & C++

Learning repository for students of **Mirai School of Technologies (MSOT), Ghaziabad campus**, Batch **2026–30**. It contains classroom examples, classwork, homework, problem-solving practice, and course notes shared by **Ashirwad Mishra** and **Vishal Rathee**.

The repository is named for its C++ and Data Structures & Algorithms focus. It also includes Python programming, Python data structures, data analysis, file handling, and C language reference material. The sections below describe the files currently in the repository.

## Learning path

### C++ programming foundations — Days 1–16

Each `dayN` folder has `CW` (classwork) and `HW` (homework) subfolders containing numbered, standalone C++ programs. The examples build programming fundamentals step by step:

| Lessons | Topics found in the examples |
| --- | --- |
| **Day 1** | First C++ program, console output, and printing simple text and ASCII figures |
| **Day 2** | Variables and basic data types, `sizeof`, keyboard input, arithmetic, rectangle calculations, swapping values, and temperature conversion |
| **Days 3–4** | Arithmetic expressions, digit extraction and sums, time conversion, simple interest, area and bill calculations, arrays of marks, and formatted output |
| **Day 5** | Comparisons and logical operators; truth tables, leap years, vowels, and simple eligibility checks |
| **Days 6–8** | `if` / `else` decisions, number classification, maximum values, grading, triangle validity and type, character checks, point-in-rectangle checks, and ticket pricing |
| **Day 9** | `switch` statements through calculators, weekdays, vowels, and month lengths |
| **Day 10** | Character codes, case conversion, string traversal, vowel counting, reversing strings, and palindrome checks |
| **Days 11–13** | Loops, sequences, sums, multiplication tables, factorials, divisors, digit counts and reversal, digital roots, Armstrong numbers, GCD, and decimal-to-binary conversion |
| **Day 14** | Nested loops, grids, multiplication tables, and coordinate pairs |
| **Days 15–16** | Series and counting problems, arithmetic progressions, Fibonacci numbers, and number and star patterns |

### Functions, recursion, pointers, and problem practice

- `Classes/Functions/` introduces function declarations, definitions, calls, parameters and return values; prime checking; swapping by pointer/address and reference; recursion; factorial, combinations (`nCr`), powers, and recursive patterns.
- `Pointer/p1.cpp` demonstrates addresses, pointers, arrays, pointer arithmetic, and pointer-to-pointer concepts.
- `CSES_class/1083.cpp` practices finding a missing number using a sum and a vector.
- `Div4/859/` contains Codeforces Round 859 practice solutions (`B.cpp` and `E.cpp`), including sorting and query/binary-search logic.
- `test.cpp` is a small C++ output check.

These are the DSA/problem-solving exercises currently present; the repository should not be read as a complete DSA syllabus.

### Python programming and data structures

`AKTU/Python/Unit_IV_Python_Introduction_Mirai_School_of_Technology.pdf` teaches Python foundations: what Python is, syntax and indentation, variables and types, input/output and type conversion, operators, decisions, loops, and functions.

`AKTU/Python/Python_fundas/` contains notebooks for identifiers and object identity, data types, operators, strings, control structures, and functions. Its Unit V notes and `Data_structures.ipynb` introduce lists, tuples, dictionaries, sets, and NumPy arrays.

### File handling and data analysis

- `AKTU/Python/File_handling/` includes lessons and notebooks for text files, file modes, reading and writing, CSV files, binary data, and working with images. The media notebook also demonstrates or discusses audio and video file handling.
- `AKTU/Python/Python_fundas/DA/` applies Python to data analysis using **Pandas, NumPy, and Matplotlib**. The materials inspect and summarize a Titanic passenger CSV, examine missing data, and create charts; separate examples simulate IoT sensor readings, save them to CSV, analyze them, and plot the results.
- The `DA/` folder includes four notebooks, seven classroom scripts, sample CSV data, and `requirements.txt`. Its `README.txt` has the Windows environment setup instructions and explains which programs to run in order.

### C programming notes

`AKTU/C/C_Programming_Notes.pdf` is a B.Tech reference covering C strings, pointers, structures (`typedef`, size, and padding), and file handling, including text/binary files and file positioning.

## Repository layout

```text
day1/–day4/, Day5/–Day14/,       C++ classwork (CW) and homework (HW)
day15/–day16/                     (folder capitalization follows the repository)
Classes/Functions/               C++ functions, recursion, and related examples
Pointer/                         C++ pointer demonstration
CSES_class/                      CSES problem practice
Div4/859/                        Codeforces practice
AKTU/C/                          C programming notes
AKTU/Python/                     Python units, notebooks, file handling, and data analysis
```

## Running the C++ examples

Each numbered `.cpp` file is intended to be compiled and run independently. From a terminal with a C++ compiler installed, for example:

```bash
g++ day1/CW/1.cpp -o lesson
./lesson
```

On Windows PowerShell, run the compiled program with:

```powershell
g++ day1/CW/1.cpp -o lesson.exe
.\lesson.exe
```

Use the path for the lesson you are studying. Several examples include `<bits/stdc++.h>`, so a GCC-compatible compiler is recommended. The data-analysis folder has its own Python setup instructions; follow `AKTU/Python/Python_fundas/DA/README.txt` before running those notebooks or scripts.

## For students

1. Start with the relevant day or course folder and read the examples in order.
2. Try the matching homework yourself after reviewing the classwork.
3. Compile or run one source file at a time; these are separate practice programs, not one combined application.
4. For Python notebooks, use the setup instructions and select the environment/kernel described for that folder.
5. When you need help, share the file path, input, expected result, actual result, and any error message with your instructor.

Use these materials to support the lessons taught by Ashirwad Mishra and Vishal Rathee at the Ghaziabad campus. Follow your instructors' directions for classwork, submissions, and deadlines.
