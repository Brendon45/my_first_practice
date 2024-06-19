# Roman to Integer Conversion

- Roman numerals are represented by seven different symbols: I, V, X, L, C, D, and M.

## Symbol	Value
I	1
V	5
X	10
L	50
C	100
D	500
M	1000

- For example, 2 is written as II in Roman numerals, which is just two ones added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

- Roman numerals are usually written from largest to smallest, from left to right. However, there are special cases where subtraction is used:

    - I can be placed before V (5) and X (10) to make 4 and 9.
    - X can be placed before L (50) and C (100) to make 40 and 90.
    - C can be placed before D (500) and M (1000) to make 400 and 900.

## Table of Contents

[Problem Statement](#problem-statement)
[Solution](#solution)
[Intuition](#intuition)
[Approach](#approach)
[Complexity](#complexity)
- [Roman to Integer Conversion](#roman-to-integer-conversion)
  - [Symbol	Value](#symbolvalue)
  - [Table of Contents](#table-of-contents)
    - [Problem Statement](#problem-statement)
    - [Solution](#solution)
    - [Intuition](#intuition)
    - [Approach](#approach)
    - [Complexity](#complexity)
    - [Example Usage](#example-usage)
    - [Example 1:](#example-1)
    - [Example 2:](#example-2)
    - [Example 3:](#example-3)
    - [Constraints](#constraints)

### Problem Statement

Given a Roman numeral, convert it to an integer.

### Solution

### Intuition

- The problem involves converting Roman numerals to their corresponding integer values. To achieve this, we need to recognize the special cases where subtraction is involved. This can be accomplished by iterating through the string and comparing the values of adjacent Roman numerals.

NB: The first file does not satisfy all edge cases and is a bit lengthy, please use the second refer to the second file which is more effective and satisfies all possible edge cases.

### Approach

- Iterate through the Roman numeral string.
- Compare the current numeral with the next numeral.
- If the current numeral is smaller than the next one, subtract its value; otherwise, add its value to the total.
- Keep track of the total value as we traverse the string.
- Return the total value.

### Complexity

1. Time complexity:

, where (n)n is the length of the Roman numeral string. We iterate through the string once.

2. Space complexity:
, as we use a fixed amount of additional memory to store variables and perform operations.

### Example Usage

### Example 1:

            Input: s = "III"
            Output: 3
            Explanation: III = 3

### Example 2:

            Input: s = "LVIII"
            Output: 58
            Explanation: L = 50, V = 5, III = 3.

### Example 3:

            Input: s = "MCMXCIV"
            Output: 1994
            Explanation: M = 1000, CM = 900, XC = 90, and IV = 4.

### Constraints

1 <= s.length <= 15
s contains only the characters ('I', 'V', 'X', 'L', 'C', 'D', 'M').
It is guaranteed that s is a valid Roman numeral in the range [1, 3999].