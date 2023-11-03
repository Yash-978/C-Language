#include<stdio.h>
#include<conio.h>
main()
{
	// Write C Program to perform a swapping of two variables without using third variable.
	
	int a;
	int b;
	printf("enter the value of a :");
	scanf("%d",&a);
	printf("enter the value of b :");
	scanf("%d",&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("enter the value of a=%d\n",a);
	printf("enter the value of b=%d",b);
}
