#include<stdio.h>
main()
{
	int p,c=0;
	long long n;
	scanf("%lld",&n);
	while(n!=0)
	{
		p=n%10;
		c=c+1;
		n=n/10;
	}
	printf("%d",c);
}



