#include<stdio.h>
main()
{
	int m;
	printf("Enter the month number: ",m);
	scanf("%d",&m);
	if(m<=12 && m>=1)
	{
		printf("The month number is valid");
	}
	else
	{
		printf("The month number is not valid");
	}}

