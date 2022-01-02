#include<stdio.h>
main()
{
	int n,s=0,p;
	printf("Enter the number: ");
	scanf("%d",&n);
	while(n!=0)
	{
		p=n%10;
		s=s+(p*p);
		n=n/10;
	}
	printf("%d",s);
}




