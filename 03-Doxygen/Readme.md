# Doxygen – Automatic Code Documentation

## 1. Introduction

Doxygen is a documentation generation tool used to create documentation directly from source code.

It is commonly used with programming languages such as C, C++, Java, Python, and others.

It helps programmers understand, maintain, and share information about their software projects.

## 2. Features of Doxygen

- Generates HTML documentation.
- Generates LaTeX documentation.
- Documents functions, classes, variables, and files.
- Supports cross-referencing between code elements.
- Supports diagrams and relationships between classes.
- Uses special comments to describe source code.

## 3. How Doxygen Works

The basic workflow is:

1. Write source code.
2. Add documentation comments.
3. Generate a configuration file.
4. Configure the required options.
5. Run Doxygen.
6. View the generated documentation.

## 4. Documentation Comments

Doxygen recognizes specially formatted comments.

### Using `/** ... */`

```cpp
/**
 * @brief Calculates the sum of two integers.
 * @param a First integer.
 * @param b Second integer.
 * @return Sum of the two integers.
 */
int add(int a, int b);
```

### Using `///`

```cpp
/// Calculates the square of a number.
/// @param n Input number.
/// @return Square of the number.
int square(int n);
```

## 5. Important Doxygen Commands and Tags

| Tag | Purpose |
|---|---|
| `@brief` | Short description |
| `@param` | Describes a function parameter |
| `@return` | Describes the return value |
| `@author` | Specifies the author |
| `@version` | Specifies the version |
| `@see` | Adds a reference to related information |
| `@note` | Adds an important note |
| `@details` | Provides a detailed description |
| `@file` | Documents a source file |
| `@class` | Documents a class |

The `@` notation can also be written using a backslash, such as `\brief` and `\param`.

## 6. Documenting Classes

Doxygen can document classes and their member functions.

```cpp
/**
 * @brief Represents a student.
 */
class Student {
public:
    /**
     * @brief Displays student information.
     */
    void display();
};
```

## 7. Generating Documentation

Doxygen uses a configuration file called `Doxyfile`.

### Step 1: Generate the configuration file

```bash
doxygen -g Doxyfile
```

This creates a default configuration file.

### Step 2: Configure the file

Important settings include:

- `PROJECT_NAME` – Name of the project.
- `OUTPUT_DIRECTORY` – Location of generated documentation.
- `INPUT` – Source files or folders.
- `FILE_PATTERNS` – File types to process.
- `RECURSIVE` – Whether subdirectories should be scanned.
- `GENERATE_HTML` – Enables HTML output.
- `GENERATE_LATEX` – Enables LaTeX output.

### Step 3: Generate documentation

```bash
doxygen Doxyfile
```

This processes the source files and generates the configured documentation.

### Step 4: View HTML documentation

Open the generated `html/index.html` file in a web browser.

## 8. Advantages of Doxygen

- Reduces the effort required to write separate documentation.
- Makes source code easier to understand.
- Helps maintain large software projects.
- Supports multiple programming languages.
- Generates searchable and organized documentation.
- Makes collaboration easier among developers.

## 9. Conclusion

Doxygen is an important software documentation tool. By using structured comments and configuration settings, developers can automatically generate professional documentation from their source code.