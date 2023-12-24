#include <stdio.h>

/**
 * Write a program that asks a user to input marks for 5 students, displaying their 
 * average, the highest mark and the lowest mark among 5 students
 */

int main()
{
	float mark[5];
	float sum, average, highest, lowest;
	int index;

	sum = highest = lowest = 0;
	/*Accepting marks from user*/
	for(index = 0; index < 5; index++)
	{
		printf("Enter mark for student %d:\n", index + 1);/* Prompting the user to enter the marks*/
		scanf("%f ", &mark[index]);
	}

	/* Funding the sum of the marks*/
	for (index = 0; index < 5; index++)
	{
		sum += mark[index];
	}
	average = sum / 5;

	printf("The average is: %f\n", average);

	return (0);
}
