#include<stdio.h>
main()
{
	int y;
	printf("Enter the year: ",y);
	scanf("%d",&y);
	if(((y%4==0 && y%100!=0)||(y%400==0)))
	{
		printf("The year is a leap year");
	}
	else
	{
		printf("The year is not a leap year");
}}
	
