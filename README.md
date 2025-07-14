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

### DigitalClock.cpp
- Real-time simulation of clock with 1-second interval updates using `Sleep(1000)`  
- Modular code: separate functions for displaying time and updating time variables  
- Time overflow management: seconds roll over to minutes, minutes to hours, hours reset after 24  
- Console screen clearing for smooth, flicker-free output using `system("cls")` on Windows  
- Uses `<iomanip>` for formatted output (leading zeros)  
- Demonstrates basics of event loops and real-time programming in console apps

---

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