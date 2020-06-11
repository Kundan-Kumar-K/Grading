#include<stdio.h>
main()
{
	int m;
	char G;
	printf("Enter your Marks : ");
	scanf("%d", &m);
	if (m >= 85&&m<=100)
	{
		G = 'A';
	}
	else if (m >= 70 && m < 85)
	{
		G = 'B';
	}
	else if (m >= 55 && m < 70)
	{
		G = 'C';
	}
	else if (m >= 40 && m < 55)
	{
		G = 'D';
	}
	else
	{
		G = 'F';
	}
	printf("Your Grade is %c", G);
}
