#include<stdio.h>
main()
{
	int i=1;
	int n,t,x;
	scanf("%d",&x);
	scanf("%d",&n);
	while(i<=n)
	{
		t=x*i;
		printf("\n%d",t);
		i=i+1;
	}
}



