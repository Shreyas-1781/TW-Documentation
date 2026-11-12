# Beamer – Presentation Creation Using LaTeX

## 1. Introduction

Beamer is a LaTeX document class used to create professional presentations and slide shows.

It allows users to create structured presentations containing text, mathematical equations, images, tables, lists, and diagrams.

## 2. Basic Structure of a Beamer Presentation

A Beamer presentation uses the `beamer` document class.

### Example

```latex
\documentclass{beamer}

\title{Introduction to Beamer}
\author{Student Name}
\institute{MNIT Jaipur}
\date{\today}

\begin{document}

\begin{frame}
    \titlepage
\end{frame}

\begin{frame}{Introduction}
    Beamer is used to create presentations using LaTeX.
\end{frame}

\end{document}
```

## 3. Frames and Slides

A frame represents a slide in a Beamer presentation.

The `frame` environment is used to create slides.

```latex
\begin{frame}{My First Slide}
    This is the content of my first slide.
\end{frame}
```

The text inside `{}` specifies the slide title.

## 4. Themes

Beamer provides different themes to change the overall appearance of a presentation.

```latex
\usetheme{Madrid}
```

Other commonly used themes include:

- `CambridgeUS`
- `Berlin`
- `Warsaw`
- `Copenhagen`
- `Darmstadt`

## 5. Lists in Beamer

Lists can be created using the same environments used in ordinary LaTeX documents.

### Unordered List

```latex
\begin{frame}{Features}
    \begin{itemize}
        \item Easy formatting
        \item Mathematical equations
        \item Professional slides
    \end{itemize}
\end{frame}
```

### Ordered List

```latex
\begin{frame}{Steps}
    \begin{enumerate}
        \item Create a document
        \item Add frames
        \item Compile the presentation
    \end{enumerate}
\end{frame}
```

## 6. Blocks

Blocks are used to highlight important information.

```latex
\begin{frame}{Important Concept}

\begin{block}{Definition}
A frame is an individual slide in a Beamer presentation.
\end{block}

\begin{alertblock}{Important}
Always organize presentation content clearly.
\end{alertblock}

\begin{exampleblock}{Example}
This is an example block.
\end{exampleblock}

\end{frame}
```

Common block types:

- `block` – General information.
- `alertblock` – Important or highlighted information.
- `exampleblock` – Examples.

## 7. Mathematical Equations

Beamer supports mathematical expressions using standard LaTeX syntax.

```latex
\begin{frame}{Mathematical Equation}

\[
E = mc^2
\]

\[
a^2+b^2=c^2
\]

\end{frame}
```

The `amsmath` package can also be used for advanced mathematical formatting.

## 8. Images

Images can be inserted using the `graphicx` package.

```latex
\usepackage{graphicx}
```

Example:

```latex
\begin{frame}{Image Example}
    \centering
    \includegraphics[width=0.6\textwidth]{image.png}
\end{frame}
```

## 9. Columns

The columns environment allows content to be arranged side by side.

```latex
\begin{frame}{Two Columns}

\begin{columns}

\column{0.5\textwidth}
Left column content.

\column{0.5\textwidth}
Right column content.

\end{columns}

\end{frame}
```

## 10. Overlays

Overlays allow presentation content to appear gradually.

For example, the `\pause` command displays content in successive steps.

```latex
\begin{frame}{Step-by-Step Display}

First point.

\pause

Second point.

\pause

Third point.

\end{frame}
```

## 11. Advantages of Beamer

- Creates professional presentations.
- Supports mathematical equations.
- Provides reusable themes and templates.
- Supports images, tables, lists, and diagrams.
- Allows content to appear progressively.
- Integrates with other LaTeX features.

## 12. Conclusion

Beamer is a useful LaTeX document class for creating academic and technical presentations. Its frame-based structure and formatting features help produce clear and organized slides.