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
