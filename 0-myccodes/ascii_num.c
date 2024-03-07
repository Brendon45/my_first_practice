#include <stdio.h>

int main(void)
{
	int var = 75, var2 = 56, num;

	num = sizeof(var) ? ( var2 > 23 ? (( var == 75 ) ? 'A' : 0) : 0) : 0;

	printf("%d\n", num);

	return (0);
}