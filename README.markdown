# Shape Drawing Program

## Overview
This C++ program demonstrates object-oriented programming and polymorphism using an abstract `Figura` class with derived classes `Kolo` (Circle), `Kwadrat` (Square), and `Trojkat` (Triangle). It sets a Polish locale for proper character display, dynamically creates shape objects, and calls their `rysuj` method to print ASCII representations.

## Features
- **Abstract Class**:
  - `Figura`: Abstract base class with a pure virtual `rysuj` method.
- **Derived Classes**:
  - `Kolo`: Draws a circle as `()`.
  - `Kwadrat`: Draws a square as `[]`.
  - `Trojkat`: Draws a triangle as `/\`.
- **Polymorphism**:
  - Uses virtual `rysuj` method overridden in derived classes.
  - Dynamically allocates objects as `Figura` pointers.
- **Localization**:
  - `setPolishLocale`: Sets `pl_PL.UTF-8` locale for Polish character support (e.g., "trójkąt").
- **Main Program**:
  - Creates three shape objects dynamically.
  - Calls `rysuj` for each to display their ASCII art.
  - Properly deallocates memory using `delete`.

## Requirements
- C++ compiler (e.g., g++, clang++)
- Standard C++ libraries: `<iostream>`, `<locale>`
- Operating system: Any supporting a C++ compiler (e.g., Windows, Linux, macOS)
- Note: `pl_PL.UTF-8` locale must be supported by the system.

## Setup
1. Clone the repository:
   ```bash
   git clone <repository-url>
   cd <repository-directory>
   ```
2. Save the provided code as `shapes.cpp`.
3. Compile the program:
   ```bash
   g++ shapes.cpp -o shapes
   ```
4. Run the program:
   ```bash
   ./shapes
   ```

## Usage
1. Compile and run the program using the steps above.
2. **Output**:
   - Displays ASCII representations of shapes:
     - `To jest koło: ()`
     - `To jest kwadrat: []`
     - `To jest trójkąt: /\`
3. **Actions**:
   - Observe the console output for shape representations.
   - Modify derived classes to add new shapes or change ASCII art.

## File Structure
- `shapes.cpp`: Main C++ source file with program logic.
- `README.md`: This file, providing project documentation.

## Notes
- The program uses Polish text (e.g., "To jest koło") and supports Polish characters via `setPolishLocale`.
- Polymorphism allows flexible shape handling through base class pointers.
- Memory management is handled properly with `new` and `delete`.
- Extend by adding new shapes (e.g., `Prostokat`) or enhancing `rysuj` with detailed ASCII art.
- No input validation; the program runs a fixed sequence.
- No external dependencies; uses only standard C++ libraries.

## Contributing
Contributions are welcome! To contribute:
1. Fork the repository.
2. Create a new branch (`git checkout -b feature-branch`).
3. Make changes and commit (`git commit -m "Add feature"`).
4. Push to the branch (`git push origin feature-branch`).
5. Open a pull request.

## License
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Contact
For questions or feedback, open an issue on GitHub or contact the repository owner.