# Diagonal Difference Algorithms

## Overview
This project implements two different approaches for solving the Diagonal Difference problem using the C programming language.

The program calculates the absolute difference between the sums of the primary diagonal and the secondary diagonal in a square matrix.

Both recursive and non-recursive techniques are implemented to compare algorithm design, performance, and memory usage.

---

# Problem Description

Given a square matrix of size `n × n`:

- Calculate the sum of the primary diagonal.
- Calculate the sum of the secondary diagonal.
- Return the absolute difference between the two sums.

---

# Mathematical Representation

## Primary Diagonal

```text
matrix[i][i]
```

## Secondary Diagonal

```text
matrix[i][n - 1 - i]
```

## Final Result

```text
| primarySum - secondarySum |
```

---

# Example

## Input

```text
3

11 2 4
4 5 6
10 8 -12
```

## Primary Diagonal

```text
11 + 5 + (-12) = 4
```

## Secondary Diagonal

```text
4 + 5 + 10 = 19
```

## Output

```text
15
```

---

# Implemented Algorithms

## 1. Non-Recursive Solution
Uses iterative loops to traverse the matrix diagonals directly.

### Characteristics
- Faster execution
- Lower memory usage
- Simpler implementation

---

## 2. Recursive Solution
Uses recursion to calculate diagonal sums step-by-step.

### Characteristics
- Demonstrates recursive problem solving
- Uses function call stack
- Higher memory consumption compared to iteration

---

# Project Structure

```text
Diagonal-Difference-Project/
│
├── recursive.c
├── non_recursive.c
├── analysis.docx
├── README.md
└── screenshots/
```

---

# Complexity Analysis

| Algorithm | Time Complexity | Space Complexity |
|---|---|---|
| Non-Recursive | O(n) | O(1) |
| Recursive | O(n) | O(n) |

---

# Concepts Demonstrated

- Matrix Traversal
- Recursion
- Iteration
- Time Complexity Analysis
- Space Complexity Analysis
- Algorithm Comparison

---

# Technologies Used

- C Programming Language
- Git
- GitHub

---

# How to Run

## Compile

```bash
gcc recursive.c -o recursive
gcc non_recursive.c -o non_recursive
```

## Execute

```bash
./recursive
./non_recursive
```

---
