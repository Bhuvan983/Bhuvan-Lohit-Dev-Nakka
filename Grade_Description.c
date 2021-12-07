#include<stdio.h>
main()
{
	char t;
	printf("Enter the grade: ");
	scanf("%c",&t);
	if(t=='E'||t=='e')
	{
		printf("Excellent");
	}
	else if(t=='V'||t=='v')
	{
		printf("Very Good");
	}
	else if(t=='G'||t=='g')
	{
		printf("Good");
	}
	else if(t=='A'||t=='a')
	{
		printf("Average");
	}
	else if(t=='F'||t=='f')
	{
		printf("Fail");
	}}
	

