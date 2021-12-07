#include<stdio.h>
main()
{
	float a,b,c;
	scanf("%f%f%f",&a,&b,&c);
	((float)a+b+c==180)?printf("The triangle is valid"):printf("The traingle is not valid");
}
