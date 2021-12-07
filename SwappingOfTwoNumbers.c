#include<stdio.h>
main()
{
int a,b,x;
printf("Enter the value of a: ");
scanf("%d",&a);
printf("Enter the value of b: ");
scanf("%d",&b);
x=a;
a=b;
b=x;
printf("The value of 'a' after swapping is: %d",a);
printf("\nThe value of 'b' after swapping is: %d",b);
}
