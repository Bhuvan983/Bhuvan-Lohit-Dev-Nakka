#include<stdio.h>
main()
{
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	while(a<=b)
	{
		if(a%5==0)
		{
			printf("\n%d",a);
		}
		a=a+1;
	}
	while(a>=b)
	{
		if(a%5==0)
		{
			printf("\n%d",a);
		}
		a=a-1;
	}
}



