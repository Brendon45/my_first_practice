#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
    
  	for (int i = 1; i <= 2 * n - 1; i++) {
        for (int j = 1; j <= 2 * n - 1; j++) {
            int distanceRow = i <= n ? i - 1 : 2 * n - i - 1;
            int distanceCol = j <= n ? j - 1 : 2 * n - j - 1;
            int distance = distanceRow < distanceCol ? distanceRow : distanceCol;
            
            printf("%d ", n - distance);
        }
        printf("\n");
    }
    return 0;
}
