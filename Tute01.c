/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include<stdio.h>
int main(void)
{
	int num01, num02;
	printf("Enter the 1st subject mark:  ");
	scanf_s("%d", &num01);
	printf("Enter the 2nd subject mark: ");
	scanf_s("%d", &num02);
	printf("verage of the mark: %.2f", (num01 + num02) / 2.00);


	return 0;
}

