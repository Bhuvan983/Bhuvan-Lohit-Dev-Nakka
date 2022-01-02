#include<stdio.h>
main()
{
	int n,m,p=1;
	scanf("%d",&n);
	while(n!=0)
	{
		m=n%10;
		n=n/10;
		if(m%2!=0)
		{
			p=p*m;
		}
	}
		printf("%d",p);
}



