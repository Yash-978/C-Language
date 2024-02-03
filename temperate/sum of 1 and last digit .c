//Write C program to find sum of first and last digit of a number.
#include<stdio.h>
#include<conio.h>
main()
{
	int a,b=0,c,d;
	printf("Enter the value of a :");
	scanf("%d",&a);//123
	d=a%10;//3
	while(a>=10)
	{
		a=a/10;//1
		c=a;//1
        b=c+d;//4
	}
	printf("the sum of 1st and last digit no is %d",b);
}
