#include<stdio.h>
int main()
{
	// declaring and initializing variables
	int x = 7;
	int y = 3;

	printf("Simple Calculator:\n"); // \n for new line
	printf("------------------------\n");
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
	}
	printf("%d %% %d = %d\n", x, y, x % y);

	return 0;

}