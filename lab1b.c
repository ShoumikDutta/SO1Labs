#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
int main()
{
	// declaring int type variables
	int x;
	int y;

	printf("Enter 1st operand: ");
	scanf("%d", &x);
	getchar();

	printf("Enter 2nd operand: ");
	scanf("%d", &y);
	getchar();

	printf("Simple Calculator:\n"); // \n for new line
	printf("-----------------------------------\n");
	printf("1st operand: %d\n", x);
	printf("2nd operand: %d\n", y);
	printf("%d + %d = %d\n", x, y, x + y);
	printf("%d - %d = %d\n", x, y, x - y);
	printf("%d * %d = %d\n", x, y, x * y);
	if (y == 0)
	{
		//cross checking for invalid divisor
		printf("Divisor cannot be 0\n");



	}
	else
	{
		printf("%d / %d = %d\n", x, y, x / y);
		printf("%d %% %d = %d\n", x, y, x % y);
	}

	getchar();
	return 0;

}