#include <stdio.h>

void update(int *a,int *b) 
{
    (*a) = 20;
    (*b) = 40;
}

int main() {
    int a = 10;
    int b = 20;
    int *pa = &a, *pb = &b;
    
    printf("Before update, a is %d and b is %d\n", a, b);
    update(pa, pb);
    printf("After update, a is %d and b is %d\n", a, b);


    return 0;
}
