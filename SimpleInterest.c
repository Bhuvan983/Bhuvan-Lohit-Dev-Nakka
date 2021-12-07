#include<stdio.h>
main()
{
   int p,t,r,SI;
   printf("Enter the principal amount: ",p);
   scanf("%d",&p);
   printf("\nEnter the rate of interest: ",r);
   scanf("%d",&r);
   printf("\nEnter the time(in years): ",t);
    scanf("%d",&t);
   SI=(p*t*r)/100;
   printf("\nThe simple interest is %d",SI);
}
