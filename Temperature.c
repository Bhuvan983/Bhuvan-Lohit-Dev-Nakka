#include<stdio.h>
main()
{
	float t;
	printf("Enter the temperature in centigrade: ",t);
	scanf("%f",&t);
	if(t<0)
	{
		printf("Freezing water");
	}
	if(t>=0 && t<10)
	{
		printf("Very Cold Weather");
	}
	if(t>=10 && t<20)
	{
		printf("Cold Weather");
	}
	if(t>=20 && t<30)
	{
		printf("Normal Temperature");
	}
	if(t>=30 && t<40)
	{
		printf("Hot");
	}
	if(t>=40)
	{
		printf("Very Hot");
	}}

