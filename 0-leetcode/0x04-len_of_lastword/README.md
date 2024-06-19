# Length Of Last Word Challengee

Given a string s consisting of words and spaces, return the length of the last word in the string.

A word is a maximalsubstring consisting of non-space characters only.

## Table of Contents

- [Length Of Last Word Challengee](#length-of-last-word-challengee)
  - [Table of Contents](#table-of-contents)
  - [Example](#example)
    - [Example 1:](#example-1)
    - [Example 2:](#example-2)
    - [Example 3:](#example-3)
    - [Constraints](#constraints)
    - [Solution](#solution)
    - [Intuition](#intuition)
    - [Approach](#approach)
    - [Complexity](#complexity)
    - [Summary](#summary)

## Example

### Example 1:

        Input: s = "Hello World"
        Output: 5
        Explanation: The last word is "World" with length 5.

### Example 2:

        Input: s = "   fly me   to   the moon  "
        Output: 4
        Explanation: The last word is "moon" with length 4.

### Example 3:

        Input: s = "luffy is still joyboy"
        Output: 6
        Explanation: The last word is "joyboy" with length 6.

### Constraints

1 <= s.length <= 10^4
s consists of only English letters and spaces ' '.
There will be at least one word in s.

### Solution

### Intuition

We can solve this problem by iterating through the string in reverse order and counting the length of the last word.

### Approach

1. Initialize a variable length to keep track of the length of the last word.
2. Start from the end of the string and skip any trailing spaces.
3. Then, count the length of the last word.
4. Return the calculated length.

### Complexity

- Time complexity: O(n), where n is the length of the input string.
- Space complexity: O(1), as we are not using any additional data structures.

### Summary

The "Length of the Last Word" problem involves finding the length of the last word in a given string. This problem is commonly used as an introductory exercise in algorithmic problem-solving and is often encountered in coding interviews.

