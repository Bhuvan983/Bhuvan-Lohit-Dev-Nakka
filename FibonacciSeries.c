#include<stdio.h>
main()
{
	int i=1,a=0,b=1,c,n;
	scanf("%d",&n);
	printf("%d   %d  ",a,b);
	while(i<=n)
	{
		c=a+b;
		printf("  %d  ",c);
		a=b;
		b=c;
		i++;
	}
}


