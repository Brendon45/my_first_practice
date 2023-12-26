#include<stdio.h>

int main(){
    //declaring variables
    int num, fact=1, i;

    printf("Enter the number\n");
    scanf("%d", &num);

    for(i=1; i<=num; i++){
        fact*= i;
    }
    printf("The factorial of %d is: %d\n", num, fact);



    return 0;
}
