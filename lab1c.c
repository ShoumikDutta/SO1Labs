#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>

int lab1c()
{
	
	int birthYear;
	printf("Enter Your Birth Year: ");
	scanf("%d", &birthYear);
	getchar();
	int digitSum = 0;
	printf("The digit sum of %d is ", birthYear);
	while (birthYear > 0)
	{
		digitSum = digitSum + birthYear % 10;
		if (birthYear / 10 == 0)
		{
			printf("%d", birthYear % 10);
		}
		else
		{
			printf("%d+", birthYear % 10);
		}
		
		birthYear = birthYear / 10;
	}

	printf("=%d", digitSum);
	return 0;

}