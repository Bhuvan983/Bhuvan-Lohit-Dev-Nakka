#include<stdio.h>
main()
{
	int i=1,s=0,n;
	scanf("%d",&n);
	while(i<=n)
	{
		s=s+i;
		i=i+1;
	}
	printf("%d",s);
}



