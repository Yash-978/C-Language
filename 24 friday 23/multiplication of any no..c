//Write C program to print multiplication table of any number.
#include<stdio.h>
#include<conio.h>
main()
{
	
	int a=1;
	int b ;
	printf("Enter any value :");
	scanf("%d",&b);
	while(a<=10)
	{
		printf("%d X %d=%d\n",a,b,a*b);
		a++;
	}
	

}