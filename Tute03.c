/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.*/

#include<stdio.h>
int main(void)
{
	int num,sum=0,i;
	printf("Enter the value: ");
	scanf_s("%d", &num);
	for (i = 1;i <= num;i++)
	{
		sum = sum + i;
	}
	printf("Sum is: %d", sum);
	return 0;
}

