# C-Language Currency Converter

A robust, scalable, and efficient console application for currency conversion, written in C. This project was developed by **Team ZenCoders** for the Programming Fundamentals (PF-CT-175) course at NED University.

* **Group Members:** Muhammad Tayyab Khan (CT-25088), Muhammad Ayaan (CT-24288), Vishal Kumar (CT-25081)
* **Submitted to:** Sir Abdullah

---

### ▶️ Project Video Presentation


---

## 🌟 Core Features

This program is built on a professional principle: **separation of logic from data**. The C code (`.c`) handles the logic, while all the currency data (`.txt`) is stored externally. This means you can update/add/remove currencies without ever recompiling the program.

* **Data-Driven:** Reads over 200+ currencies from an external `rates.txt` file on startup.
* **Efficient "Base-USD" Logic:** All conversions are routed through a base currency (USD). This eliminates the need for 32,000+ conversion pairs and simplifies the math to one single, reusable formula.
* **Robust Input Handling:**
    * **File Check:** Gracefully handles a missing `rates.txt` file with a user-friendly error instead of crashing.
    * **`scanf` Bug Fix:** Includes a fix for the common `scanf` infinite loop bug, allowing it to reject non-numeric input (like 'abc') safely.
* **Simple Menu Interface:** A clean, menu-driven console with three options:
    1.  Convert a Currency
    2.  List all Available Currencies
    3.  Exit
* **Case-Insensitive:** Automatically converts user input (like 'pkr' or 'eur') to uppercase ('PKR', 'EUR') for easy matching.

## 🛠️ How to Compile & Run

### Prerequisites

* A C compiler (like **GCC** or **Clang**)
* The `currency_converter.c` file
* The `rates.txt` file (must be in the same folder)

### Instructions

1.  **Open your terminal** or command prompt.
2.  **Navigate** to the folder containing both files.
3.  **Compile** the program using `gcc`:
    ```bash
    # This command compiles the C code and creates an executable file named "converter"
    gcc currency_converter.c -o converter
    ```
4.  **Run** the compiled program:
    * **On Windows:**
        ```bash
        .\converter.exe
        ```
    * **On macOS / Linux:**
        ```bash
        ./converter
        ```

## ⚙️ Code Highlights

This project isn't just a simple script. Here are the most important C concepts that make it scalable and robust.


