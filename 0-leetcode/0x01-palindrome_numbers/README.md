# Palindrome Number Checker

- This program checks if an integer x is a palindrome.

- An integer is a palindrome when it reads the same forward and backward.

Problem
Given an integer x, return true if x is a palindrome, and false otherwise.

Solution
Intuition
My initial approach involved extracting the first and last digits for comparison. However, I later found that this method did not cover all cases. I then switched to converting the integer to a string, which proved to be effective.

NB: The first file is the solution to the first approach and the second file is the second approach which is more effective.
Approach
The program first checks if x is a negative number. If it is, the function returns false since negative numbers cannot be palindromes.

Next, the program converts the integer x to a string and checks if it reads the same from left to right and from right to left.

Complexity
Time complexity:
where (n) is the number of digits in x.

Space complexity:
for storing the string representation of x.

Example Usage
Example 1:
Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:
Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:
Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
Constraints
-231 <= x <= 231 - 1


