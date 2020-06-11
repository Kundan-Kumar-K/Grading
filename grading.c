#include<stdio.h>
main()
{
	int m;
	char G;
	printf("Enter your Marks : ");
	scanf("%d", &m);
	G = m >= 85 && m<=100 ? 'A' : (m >= 70 && m < 85 ? 'B' : (m >= 55 && m < 70 ? 'C' : (m >= 40 && m < 55 ? 'D' : 'F')));
	printf("Your Grade is %c", G);
}
