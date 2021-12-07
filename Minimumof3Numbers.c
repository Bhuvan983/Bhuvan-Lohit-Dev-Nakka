#include<stdio.h>
main()
{
	int a,b,c;
	scanf("%d",&a);
		scanf("%d",&b);
			scanf("%d",&c);
			if(a<b && a<c)
			{
				printf("a is the minimum of the 3 numbers",a);
			}
			else if(b<a && b<c)
			{
				printf("b is the minimum of the 3 numbers",b);
			}
				else if(c<b && c<a)
			{
				printf("c is the minimum of the 3 numbers",c);
			
}}
