# C-Language Currency Converter - Project Code

This folder contains the complete runnable source code for the C-language Currency Converter project.

### Files in this folder:

* `currency_converter.c`: The main C source code file.
* `rates.txt`: The data file containing **152** global currency rates.
* `README.md`: This file, containing build and run instructions.

---

## How to Compile and Run

**CRITICAL:** The `rates.txt` file **must** be in the same directory as the final executable file for the program to work.

### 1. Prerequisites
You must have a C compiler, such as `gcc` (which is standard on Linux/macOS) or `MinGW` (for Windows).

### 2. Compile
Open your terminal or command prompt, navigate to this folder, and run the following command:

```bash
# This command compiles the C code and creates an executable file named "converter"
gcc currency_converter.c -o converter
