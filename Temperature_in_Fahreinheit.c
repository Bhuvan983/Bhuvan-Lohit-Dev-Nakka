#include<stdio.h>
main()
{
	float c,f;
	printf("The temperature is Fahreinheit: ",f);
	scanf("%f",&f);
	c=((f-32)*5)/9;
	printf("The temperature in Celsius is %f",c);
}
