//Check whether a number is perfect or not
#include<stdio.h>
main()
{
	int i,n,s=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			s=s+i;
		}
	}
	if(s==2*n)
	{
		printf("The number is perfect");
	}
	else
	{
		printf("The number is not perfect");
	}
}



