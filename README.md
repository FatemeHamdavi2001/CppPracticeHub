## C++ Intermediate Projects Hub

This repository includes my **intermediate-level C++ projects** designed to improve my skills through real-world logic, structured code, and modular design using functions.

Each project here is more complex than basic exercises and focuses on solving practical problems using clean and maintainable code.

---

## What's Included?

| File Name               | Description                                                                 |
|-------------------------|-----------------------------------------------------------------------------|
| date_validator.cpp      | Validates a full date (day, month, year), including leap year and day checks.|
| DigitalClock.cpp        | Simulates a real-time digital clock from 00:00:00 with live updates every second. Uses modular functions for time display and increment, handles time overflow (seconds → minutes → hours), and clears console screen for smooth output. Compatible with Windows (uses Sleep and system("cls")). |
| calculator_menu.cpp  | A menu-driven calculator implementing addition, subtraction, multiplication, division, power (a^b), factorial, and exit option. Uses modular functions and input validation. |
| voting_system.cpp       | A simple interactive voting system that lets users vote for candidates, stores results in an array, and displays the winner. Modular design with functions for menu, voting, result display, and input handling. |

*More projects coming soon...*

---

## Goals

- Apply C++ knowledge in solving practical programming challenges  
- Strengthen understanding of **functions**, **modularity**, and **input validation**  
- Prepare for building full-featured applications in the future  
- Build a solid portfolio of real projects

---

## Technologies

- Language: C++ (Standard: C++17)  
- Concepts used: Functions, Conditionals, Logical Operators, Modular Code  
- Platform-specific: Windows console for DigitalClock (Sleep and system calls)

---

## Features & Techniques

### date_validator.cpp
- Validates full dates including day, month, and year (e.g., 31/4/2023 is invalid)
- Leap year support using Gregorian calendar rules
- Uses `switch-case` to return correct number of days in each month
- Modular design with separate functions for leap year check, day count, and validation
- Provides specific error messages for invalid input parts (day/month/year)
- Uses `std::cin.fail()` to catch non-numeric input errors

---

### DigitalClock.cpp
- Simulates a live digital clock with hours, minutes, and seconds
- Uses `Sleep(1000)` for 1-second real-time updates (Windows-only)
- Uses `\r` and `std::flush` to overwrite output on the same line for smooth display
- Time overflow handling: seconds → minutes → hours → resets after 24
- Uses `<iomanip>` for formatting output with leading zeros

---

### calculator_menu.cpp
- Menu-based calculator with 6 operations: add, subtract, multiply, divide, power, factorial
- Each operation implemented in its own function for clean modular structure
- Handles edge cases like divide-by-zero, negative factorial, and undefined power (e.g., 0^0)
- Uses `switch-case` to manage menu logic and loop for continuous interaction
- Input validation with helpful error messages for incorrect values
- Pauses after each operation to improve user experience using `std::cin.get()`

---

### voting_system.cpp
- Simple interactive voting program using array-based vote counting  
- Modular structure: separate functions for menu, voting, result display  
- Input validation and user-friendly prompts for smooth interaction  
- Uses loop and conditionals to keep voting running until user exits  
- Demonstrates beginner-friendly logic for user selection and tallying



## Structure

Each project is placed in a modular way with:  
- Clear file names  
- Proper documentation and comments  
- Ready to extend with more features  

---

## Coming Up Next

- Bank account manager  
- Mini calculator with history  
- Student grading system  
- File-based user login/register  
... and more to come!

---

## Author

**Fateme Hamdavi**  
Computer Science Student | Aspiring C++ Developer  
📧 Email: fateme.hamdavi2001@gmail.com  
🔗 GitHub: [@FatemeHamdavi2001](https://github.com/FatemeHamdavi2001)

---

Stay tuned and feel free to fork, explore, and suggest improvements!