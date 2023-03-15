/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include<stdio.h>
int minimums(int no1,int no2);
int maximums(int no1, int no2);
int multiplys(int no1,int no2);
int main(void)
{
	int num01, num02;
	printf("Enter a value for no 1 : ");
	scanf_s("%d", &num01);
	printf("Enter a value for no 2 : ");
	scanf_s("%d", &num02);

	printf("minimums number is : %d\n", minimums(num01, num02));
	printf("maximums number is : %d\n", maximums(num01, num02));
	printf("multiplys number is : %d\n", multiplys(num01, num02));
	return 0;
}
int maximums(int no1, int no2)
{
	if (no1 > no2) {
		return no1;
	}
	else if (no1 < no2) {
		return no2;
	}

}
int minimums(int no1, int no2)
{
	if (no1 < no2) {
		return no1;
	}
	else if (no1 > no2) {
		return no2;
	}
}
int multiplys(int no1, int no2)
{
	return no1 * no2;
}
