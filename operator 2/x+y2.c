#include<stdio.h>
#include<conio.h>
main()
{
	int x;
	int y;
	int Answer;
	printf("Enter the value of x :");
	scanf("%d",&x);
	printf("Enter the value of y :");
	scanf("%d",&y);
	
	Answer=(x*x+2*x*y+y*y);
	printf("%d",Answer);
}