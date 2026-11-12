# LaTeX – Document Preparation

## 1. Introduction

LaTeX is a document preparation system used to create professionally formatted documents. It is especially useful for academic papers, reports, books, mathematical documents, and technical writing.

Unlike a normal word processor, LaTeX uses commands and markup to control document structure and formatting.

## 2. Basic Structure of a LaTeX Document

A basic LaTeX document contains three main parts:

1. Document class declaration
2. Preamble
3. Document environment

### Example

```latex
\documentclass{article}

\usepackage{amsmath}

\title{My First LaTeX Document}
\author{Student Name}
\date{\today}

\begin{document}

\maketitle

\section{Introduction}
This is my first LaTeX document.

\end{document}
```

## 3. Document Classes

The `\documentclass{}` command specifies the type of document.

Common document classes include:

- `article` – Short documents and assignments.
- `report` – Reports and longer documents.
- `book` – Books and large documents.
- `letter` – Formal letters.
- `beamer` – Presentations.

## 4. Common Formatting Commands

| Command | Purpose |
|---|---|
| `\textbf{}` | Bold text |
| `\textit{}` | Italic text |
| `\underline{}` | Underline text |
| `\section{}` | Create a section |
| `\subsection{}` | Create a subsection |
| `\paragraph{}` | Create a paragraph heading |
| `\\` | Line break |
| `\newpage` | Start a new page |

## 5. Lists

LaTeX supports different types of lists.

### Unordered List

```latex
\begin{itemize}
    \item First item
    \item Second item
    \item Third item
\end{itemize}
```

### Ordered List

```latex
\begin{enumerate}
    \item First item
    \item Second item
    \item Third item
\end{enumerate}
```

## 6. Mathematical Equations

The `amsmath` package provides useful mathematical environments.

### Inline Equation

```latex
The equation is $a^2+b^2=c^2$.
```

### Display Equation

```latex
\[
a^2+b^2=c^2
\]
```

### Equation Environment

```latex
\begin{equation}
E = mc^2
\end{equation}
```

## 7. Tables

Tables are created using the `tabular` environment.

```latex
\begin{tabular}{|c|c|}
\hline
Name & Marks \\
\hline
Student A & 90 \\
Student B & 85 \\
\hline
\end{tabular}
```

- `c` represents centre alignment.
- `l` represents left alignment.
- `r` represents right alignment.
- `\hline` creates a horizontal line.
- `&` separates columns.
- `\\` ends a row.

## 8. Figures and Images

The `graphicx` package is commonly used to insert images.

```latex
\usepackage{graphicx}
```

Example:

```latex
\begin{figure}[h]
    \centering
    \includegraphics[width=0.5\textwidth]{image.png}
    \caption{Sample Figure}
    \label{fig:sample}
\end{figure}
```

## 9. References and Labels

LaTeX allows cross-referencing using labels and references.

```latex
\section{Conclusion}
\label{sec:conclusion}

Refer to Section \ref{sec:conclusion}.
```

## 10. Advantages of LaTeX

- Produces consistent and professional documents.
- Handles mathematical equations effectively.
- Supports automatic numbering and references.
- Suitable for large academic documents.
- Separates content from formatting.

## 11. Conclusion

LaTeX is a powerful tool for technical and academic writing. Its commands, environments, packages, and automatic formatting features make it useful for preparing structured documents.