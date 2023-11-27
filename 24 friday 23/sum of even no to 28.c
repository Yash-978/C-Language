//wap to find sum of even number between 1 to 28
#include<stdio.h>
#include<conio.h>
main()
{
	int a,sum=0;
	
	for (a=2; a<28;a+=2) 
	{
		printf("%d \n",a);
		sum=sum+a;
	}
	printf("The sum of even no between 1 to 28 will be %d",sum);
}
