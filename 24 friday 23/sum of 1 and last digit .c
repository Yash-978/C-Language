#include<stdio.h>
#include<conio.h>
main()
{
	int a,b=0,c,d;
	printf("Enter the value of n :");
	scanf("%d",&a);
	d=a%10;
	while(a>=10)
	{
		a=a/10;
		c=a;
        b=c+d;
	}
	printf("the sum of 1st and last digit no is %d",b);
}
