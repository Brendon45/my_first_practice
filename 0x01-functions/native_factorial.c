#include <stdio.h>

/**
* main - Entry Point
* Factorial - Function that calculates factorial of a number using a native for loop
* Return: 0 (Success)
*/

int Factorial(int num);

int main(){
    int num1,num2;
    printf("Enter first number");
    scanf("%d", &num1);

    printf("Enter second number");
    scanf("%d", &num2);

    printf("The factorial of %d is: %d\n", num1, Factorial(num1));
    printf("The factorial of %d is: %d\n", num2, Factorial(num2));
    
    return 0;
}

int Factorial(int num){
    int fact=1, i;
    for(i=1; i<=num; i++){
        fact*=i;
    }

    return fact;
}
