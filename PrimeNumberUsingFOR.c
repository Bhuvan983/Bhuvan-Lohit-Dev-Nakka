#include<stdio.h>
main()
{
	int n,i,f=0;
	scanf("%d",&n);
	for(i=1;i<=n;i=i+1)
	{
		if(n%i==0)
		{
			f=f+1;
		}
	}
	if(f==2)
	{
		printf("%d is a prime number",n);
	}
	if(f!=2)
	{
		printf("%d is not a prime number",n);
	}
}


