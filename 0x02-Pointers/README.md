Pointers in C language

Objective
In this challenge, you will delve into implementing basic functionalities of pointers in C. Pointers in C allow you to share a memory address among different contexts, primarily functions. They are crucial when a function needs to modify the content of a variable it doesn't own.

To access the memory address of a variable val, you prepend it with an ampersand &. For instance, &val returns the memory address of val.

This memory address can be assigned to a pointer and shared among various functions. For instance, int* p = &val; assigns the memory address of val to pointer p. To access the content of the memory to which the pointer points, you prepend it with an asterisk *. For instance, *p returns the value reflected by val, and any modification to it will be reflected at the source (val).

void increment(int *v) {
    (*v)++; 
}
int main() {
    int a;
    scanf("%d", &a);
    increment(&a);
    printf("%d", a);
    return 0;      
}     
Task
Complete the function void update(int *a, int *b). It receives two integer pointers, int* a and int* b. Set the value of a to their sum, and b to their absolute difference. There is no return value, and no return statement is needed.

Input Format
The input will contain two integers, a and b, separated by a newline.

Output Format
Modify the two values in place and the code stub main() will print their values.

Note: Input/output will be automatically handled. You only have to complete the function described in the 'task' section.

Sample Input
4
5
Sample Output
9
1
Explanation
a gets updated to 4 + 5 = 9
b gets updated to |4 - 5| = 1
