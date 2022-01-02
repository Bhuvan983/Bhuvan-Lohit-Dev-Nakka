#include<stdio.h>
main()
{
	int n,p=1,q;
	scanf("%d",&n);
	while(n!=0)
	{
		q=n%10;
		p=p*q;
		n=n/10;
	}
	printf("%d",p);
}



