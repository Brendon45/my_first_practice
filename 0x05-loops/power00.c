#include<stdio.h>
#include<math.h>

int main(){
    int base, power;
    printf("Enter the base\n");
    scanf("%d", &base);
    printf("Enter the Power\n");
    scanf("%d", &power);

    printf("%d to the power of %d is: %f\n", base, power, pow(base, power));

    return 0;
}
