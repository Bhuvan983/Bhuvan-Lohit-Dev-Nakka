#include<stdio.h>
main()
{
	int i=1,n,a;
	printf("Enter the number of values that are to be entered: ",n);
	scanf("%d",&n);
	while(i<=n)
	{
		scanf("\n%d",&a);
		if(a%2==0)
		{
			printf("%d is an Even number\n",a);
		}
		i++;
	}
}



