#include<stdio.h>
#include<math.h>
main()
{
	int i=1,n;
	double r;
	scanf("%d",&n);
	printf("Number | Square | Cube  | Square Root\n");
	while(i<=n)
	{
    printf("  %d \t %d \t %d \t %lf\n",i,(i*i),(i*i*i),sqrt(i));
       i++;
	}
}



