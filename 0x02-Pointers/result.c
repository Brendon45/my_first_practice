#include <stdio.h>

void update(int *a, int *b) 
{
    int temp_a = *a;  /* Store the original value of a*/
    
    *a = *a + *b;  /* Update a*/
    
    if (temp_a > *b)
    {
        *b = temp_a - *b;  /* Update b with the absolute difference */
    } 
    else 
    {
        *b = *b - temp_a;  /* Update b with the absolute difference*/
    }
}



int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
