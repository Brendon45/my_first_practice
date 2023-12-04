Function Usage in C
Objective
In this challenge, we will explore the simple usage of functions in C. Functions are a group of statements grouped together, provided with zero or more arguments. They execute the statements on those arguments and either return nothing (void) or something based on the return type.

Sample Function Syntax
return_type function_name(arg_type_1 arg_1, arg_type_2 arg_2, ...) {
    // ...
    // ...
    // ...
    [if return_type is non-void]
    return something of type `return_type`;
}
For instance, a function to read four variables and return their sum can be written as:

int sum_of_four(int a, int b, int c, int d) {
    int sum = 0;
    sum += a;
    sum += b;
    sum += c;
    sum += d;
    return sum;
}
+=: Add and assignment operator. It adds the right operand to the left operand and assigns the result to the left operand. a += b is equivalent to a = a + b.

Task
Write a function int max_of_four(int a, int b, int c, int d) which reads four arguments and returns the greatest of them.

Note: There is no built-in max function in C. Code that will be reused is often put in a separate function, e.g. int max(x, y) that returns the greater of the two values.

Input Format
Input will contain four integers, a, b, c, and d, one on each line.

Output Format
Print the greatest of the four integers.

Note: I/O will be automatically handled.

Sample Input
3
4
6
5
Sample Output
6
