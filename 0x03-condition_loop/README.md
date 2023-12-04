Conditions and loops in C

Objective
In this challenge, you will work with conditional statements if and else, two of the most frequently used conditionals in C/C++. These enable you to execute zero or one conditional statement among many dependent conditional statements. They are used in the following ways:

if: This executes the body of bracketed code starting with if if the condition evaluates to true.

if (condition) {
    statement1;
    ...
}
if - else: This executes the body of bracketed code starting with if if the condition evaluates to true, or it executes the body of code starting with else if the condition evaluates to false. Only one of the bracketed code sections will ever be executed.

if (condition) {
    statement1;
    ...
}
else {
    statement2;
    ...
}
if - else if - else: In this structure, dependent statements are chained together and the else if for each statement is only checked if all prior conditions in the chain are evaluated to false. Once a condition evaluates to true, the bracketed code associated with that statement is executed and the program then skips to the end of the chain of statements and continues executing. If each else if in the chain evaluates to false, then the body of bracketed code in the else block at the end is executed.

if (first condition) {
    ...
}
else if (second condition) {
    ...
}
.
.
.
else if ((n-1)'th condition) {
    ....
}
else {
    ...
}
Task
Given a positive integer denoting n, do the following:

If n is between 1 and 9 (inclusive), print the lowercase English word corresponding to the number (e.g., one for 1, two for 2, etc.).
If n is greater than 9, print Greater than 9.
Input Format
The first line contains a single integer, n.

Constraints
1 ≤ n ≤ 100
Output Format
If n is between 1 and 9 (inclusive), then print the lowercase English word corresponding to the number (e.g., one for 1, two for 2, etc.); otherwise, print Greater than 9.

Sample Input
5
Sample Output
five
Sample Input #01
8
