#include <stdio.h>

int main(){

    int num, sum=0, i;
    printf("Enter any number\n");
    scanf("%d", &num);

    for(i=1; i<=num; i++){
        sum+=i;
    }

    printf("Sum up to %d is: %d\n", num, sum);


    return 0;
}
