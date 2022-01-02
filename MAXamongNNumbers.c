//Read n numbers and find maximum among them.
#include<stdio.h>
main()
{
	int i,n,p,q;
	printf("Enter the number of values: ",n);
	scanf("%d",&n);
	//Enter the first number
	scanf("%d",&p);
	for(i=1;i<=n-1;i++)
	{
		scanf("%d",&q);
		if(p<q)
		{
			p=q;
		}
	}
	printf("The maximum among the numbers is %d",p);
}



