#include<stdio.h>
main()
{
	int cp,sp,p,l;
	printf("Enter the value of Cost Price: ",cp);
	scanf("%d",&cp);
	printf("Enter the value of Selling Price: ",sp);
	scanf("%d",&sp);
	p=sp-cp;
	l=cp-sp;
	if(sp-cp>0)
	{
			printf("The profit is %d",p);
	}
	else if(sp-cp<0)
	{
		printf("The loss is %d",l);
	}}
