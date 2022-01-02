#include<stdio.h>
main()
{
	int i,x,y,z=1;
	scanf("%d",&x);
	scanf("%d",&y);
	for(i=1;i<=y;i++)
	{
		z=z*x;
	}
	printf("%d",z);
}



