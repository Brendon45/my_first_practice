#include<stdio.h>

/**
* main - Entry Point
* Factorial - Function that calculates functorial of a number using recursion
* Return: 0 (Success)
*/

int Factorial(int);

int main(){
    printf("The factorial of your number is: %d\n", Factorial(6) );

    return 0;
}

int Factorial(int num){
    if(num==0){
        return 1;
    }
    else{
        return num* Factorial(num-1);
    }
}
