#include<stdio.h>
main()
{
	int i=1;
	int f=1,n;
	scanf("%d",&n);
	while(i<=n)
	{
		f=f*i;
		i=i+1;
	}
	printf("%d",f);
}



