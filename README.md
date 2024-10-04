# Problem Description

The task involves identifying a valid number using the Lexical Analyzer of a Compiler. Instead of listing all valid numbers, we can represent the language of valid numbers using a Regular Expression. The subsequent steps involve converting this Regular Expression into:

1. An equivalent Non-Deterministic Finite Automaton (NFA)
2. An equivalent Deterministic Finite Automaton (DFA)
3. A computer program that utilizes the DFA to validate numbers.

## Solution Overview

This solution covers the following steps:

## (a) Regular Expression

We derive a Regular Expression that represents all valid numbers. The final Regular Expression is:

Regex: (b?(a a*)(d a a*)?(c b? a a*)?)
b: + or -
a: 0-9
d: . (decimal)
c: e or E (exponential)

## (b) Convert Regular Expression to NFA

We convert the above Regular Expression into an equivalent Non-Deterministic Finite Automaton (NFA) using the following method:

1. Define the states and transitions based on the Regular Expression.
2. Create a visual representation of the NFA.

### (c) Convert NFA to DFA

The NFA is converted into a Deterministic Finite Automaton (DFA) by:

1. Creating a state table for the NFA.
2. Applying the subset construction method to derive the DFA.
3. Visualizing the DFA structure.

## (d) Convert DFA to Program

The DFA is implemented in a programming language, which allows the Lexical Analyzer to validate numbers using the DFA. A sample Python implementation is included in the Jupyter Notebook.

## Instructions to Use

1. **Upload the Jupyter Notebook to Google Colab:**
   - Go to [Google Colab](https://colab.research.google.com/).
   - Click on `File` → `Upload notebook` and select `valid_number_recognition.ipynb`.

2. **Run the Notebook:**
   - Execute each cell sequentially to generate the graphs and perform number validation.
   - Ensure you have the required libraries installed (e.g., `matplotlib`, `numpy`).

3. **Download Images:**
   - After generating the NFA and DFA graphs, run the respective cells to save images.
   - The images will be downloaded to your local machine.

## Requirements

- Python 3.x
- Libraries: `matplotlib`, `numpy`

## Additional File
The DFA file is converted to further program state in the additional cpp file.
