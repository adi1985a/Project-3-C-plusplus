# 🎨 도형 ASCIIShapes: C++ OOP & Polymorphism Demo 🇵🇱
_A C++ console program demonstrating object-oriented programming (OOP) principles like abstract classes and polymorphism by drawing various shapes (Circle, Square, Triangle) using ASCII art, with Polish locale support._

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![C++](https://img.shields.io/badge/Language-C%2B%2B-blue.svg)](https://isocpp.org/)
[![Platform: Cross-platform](https://img.shields.io/badge/Platform-Cross--platform-lightgrey.svg)]()

## 📋 Table of Contents
1.  [Overview](#-overview)
2.  [Key OOP Concepts & Features](#-key-oop-concepts--features)
3.  [Screenshots (Conceptual Output)](#-screenshots-conceptual-output)
4.  [System Requirements](#-system-requirements)
5.  [Installation and Setup](#️-installation-and-setup)
6.  [Usage Guide](#️-usage-guide)
7.  [File Structure](#-file-structure)
8.  [Technical Notes](#-technical-notes)
9.  [Contributing](#-contributing)
10. [License](#-license)
11. [Contact](#-contact)

## 📄 Overview

**ASCIIShapes OOP Demo**, developed by Adrian Lesniak, is a C++ console application designed to showcase fundamental object-oriented programming (OOP) concepts, particularly **abstraction** and **polymorphism**. It defines an abstract base class `Figura` (Shape) with a pure virtual `rysuj()` (draw) method. Concrete derived classes `Kolo` (Circle), `Kwadrat` (Square), and `Trojkat` (Triangle) override this method to print their respective simple ASCII art representations to the console. The program also demonstrates setting a Polish locale (`pl_PL.UTF-8`) to ensure correct display of Polish characters in its output messages.

## ✨ Key OOP Concepts & Features

*   🏛️ **Abstract Base Class (`Figura`)**:
    *   Defines a common interface for all shapes.
    *   Contains a **pure virtual function** `virtual void rysuj() const = 0;`, making `Figura` an abstract class that cannot be instantiated directly.
    *   Includes a virtual destructor `virtual ~Figura() {}` for proper cleanup when dealing with derived objects through base class pointers.
*   🔶⚪⬜ **Derived Concrete Classes**:
    *   **`Kolo` (Circle)**: Inherits from `Figura` and overrides `rysuj()` to print a circle representation (e.g., `()`).
    *   **`Kwadrat` (Square)**: Inherits from `Figura` and overrides `rysuj()` to print a square representation (e.g., `[]`).
    *   **`Trojkat` (Triangle)**: Inherits from `Figura` and overrides `rysuj()` to print a triangle representation (e.g., `/\\`).
*   🔄 **Polymorphism in Action**:
    *   Objects of derived classes (`Kolo`, `Kwadrat`, `Trojkat`) are dynamically allocated and stored as `Figura*` (pointers to the base class).
    *   The correct `rysuj()` method for each specific shape is called at runtime due to virtual function dispatch, demonstrating polymorphism.
*   🇵🇱 **Localization (Polish Language Support)**:
    *   `setPolishLocale()`: A function that attempts to set the global C++ locale to `pl_PL.UTF-8` using `std::locale::global(std::locale("pl_PL.UTF-8"));`. This allows the program to correctly display Polish diacritics (e.g., "ł" in "koło", "ą" in "trójkąt") in its console output, provided the system and terminal support this locale and encoding.
*   🧠 **Dynamic Memory Management**:
    *   Shape objects are created on the heap using `new`.
    *   Memory is explicitly deallocated using `delete` to prevent memory leaks.

## 🖼️ Screenshots (Conceptual Output)

The program does not have an interactive UI but produces direct console output.

**Expected Console Output:**
*To jest koło: ()*
*To jest kwadrat: []*
*To jest trójkąt: /\*

*(The exact Polish phrases like "To jest koło" might vary based on implementation but demonstrate the locale setting.)*

## ⚙️ System Requirements

*   **Operating System**: Any OS supporting a C++ compiler and the `pl_PL.UTF-8` locale (e.g., Windows, Linux, macOS). The terminal used must also support UTF-8 rendering for Polish characters to display correctly.
*   **C++ Compiler**: A C++ compiler supporting C++11 or later (e.g., g++, clang++, MSVC).
*   **Standard C++ Libraries**: `<iostream>` (for console I/O), `<vector>` (if used for storing shapes, though the example implies individual pointers), `<string>` (if used), `<locale>` (for setting the locale).

## 🛠️ Installation and Setup

1.  **Clone the Repository (if applicable)**:
    ```bash
    git clone <repository-url>
    cd <repository-directory>
    ```
    *(Replace `<repository-url>` and `<repository-directory>` if this code is part of a larger repository).*

2.  **Save Main Code**:
    Ensure your C++ source code (containing the `Figura` abstract class, derived shape classes, `setPolishLocale` function, and `main` function) is saved as `shapes.cpp` (or your chosen file name) in your project directory.

3.  **Compile the Program**:
    Open a terminal (Command Prompt, PowerShell, Bash, etc.) in the project directory.
    **Example using g++:**
    ```bash
    g++ shapes.cpp -o shapes -std=c++11
    ```
    *(Add `-static-libgcc -static-libstdc++` on Windows with MinGW if desired for standalone executables. Add optimization flags like `-O2` for release builds if needed).*

4.  **Run the Program**:
    *   On Windows: `.\shapes.exe` or `shapes.exe`
    *   On Linux/macOS: `./shapes` (ensure execute permissions: `chmod +x shapes`)

## 💡 Usage Guide

1.  Compile `shapes.cpp` as detailed in the "Installation and Setup" section.
2.  Run the compiled executable (`shapes` or `shapes.exe`).
3.  **Output**:
    *   The program will directly print the ASCII representations of a circle, a square, and a triangle to the console, each preceded by a descriptive Polish phrase (e.g., "To jest koło: ()").
4.  **Actions**:
    *   Observe the console output to see the shapes and verify that Polish characters (if any in your specific output strings like "trójkąt") are displayed correctly.
    *   The program runs a fixed sequence and then terminates. There are no interactive prompts.
    *   To experiment, you can modify the `rysuj()` methods in the derived classes to change the ASCII art or add new shape classes inheriting from `Figura`.

## 🗂️ File Structure

*   `shapes.cpp`: The main (and likely only) C++ source file containing all class definitions (`Figura`, `Kolo`, `Kwadrat`, `Trojkat`), the `setPolishLocale` function, and the `main()` function.
*   `README.md`: This documentation file.

*(No external data files, log files, or user-provided header files are indicated for this specific program as described.)*

## 📝 Technical Notes

*   **Polish Locale (`pl_PL.UTF-8`)**: The success of `setPolishLocale()` depends on the operating system having support for this specific locale installed and the terminal being configured to correctly interpret and render UTF-8 encoded characters. If the locale is not supported, `std::locale::global` might throw an exception or have no effect.
*   **Polymorphism**: The core educational value lies in how `fig[i]->rysuj()` calls the correct derived class's version of `rysuj()` due to it being a virtual function.
*   **Memory Management**: The use of `new` for dynamic allocation necessitates corresponding `delete` calls for each allocated object to prevent memory leaks. Smart pointers (`std::unique_ptr` or `std::shared_ptr`) could be a more modern C++ approach for automatic memory management if the collection of shapes were more complex or long-lived.
*   **Simplicity of ASCII Art**: The current ASCII representations are very basic (`()`, `[]`, `/\\`). This can be easily extended within each `rysuj()` method for more elaborate drawings.
*   **Fixed Sequence**: The program executes a predefined sequence of creating and drawing three shapes. It's not interactive beyond observing the output.

## 🤝 Contributing

Contributions to this **ASCIIShapes OOP Demo** are welcome, especially if they aim to:

*   Add more derived shape classes (e.g., `Prostokat` (Rectangle), `Elipsa` (Ellipse)).
*   Enhance the `rysuj()` methods with more detailed or creative ASCII art.
*   Implement a simple factory pattern for creating shapes.
*   Showcase other OOP principles using this shape hierarchy.
*   Improve error handling around locale setting.

1.  Fork the repository.
2.  Create a new branch for your feature (`git checkout -b feature/NewShapeArt`).
3.  Make your changes and commit them (`git commit -m 'Feature: Add Rectangle shape with ASCII art'`).
4.  Push to the branch (`git push origin feature/NewShapeArt`).
5.  Open a Pull Request.

Please ensure your code is well-commented and aligns with good C++ OOP practices.

## 📃 License

This project is licensed under the **MIT License**.
(If you have a `LICENSE` file in your repository, refer to it: `See the LICENSE file for details.`)

## 📧 Contact

Created by **Adrian Lesniak**.
For questions, feedback, or issues related to this OOP demonstration, please open an issue on the GitHub repository or contact the repository owner.

---
🎨 _Illustrating the power of C++ OOP with simple shapes and a touch of localization!_
