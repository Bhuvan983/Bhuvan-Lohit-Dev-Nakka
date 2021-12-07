#include<stdio.h>
main()
{
	int bas,hra,da,sal;
	printf("Enter the basic salary: ",bas);
	scanf("%d",&bas);
    if(bas<=10000)
    {
    	hra=(20*bas)/100;
    	da=(80*bas)/100;
	}
	else if(bas<=20000)
	{
		hra=(25*bas)/100;
    	da=(90*bas)/100;
	}
	else if(bas>20000)
	{
		hra=(30*bas)/100;
    	da=(95*bas)/100;
	}
	sal=bas+hra+da;
	printf("The Gross Salary is: %d",sal);
}
