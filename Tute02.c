/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.*/

#include<stdio.h>
int main(void)
{
	int dis;
	printf("Enter the distance: ");
	scanf_s("%d", &dis);
	if (dis <= 30) {
		printf("Amount is : %d", dis * 50);
	}
	else {
		printf("Aount is : %d", 30 * 50 + (dis - 30) * 40);
	}

	return 0;
}
