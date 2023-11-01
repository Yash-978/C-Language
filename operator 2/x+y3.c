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
	
	Answer=(x*x*x+y*y*y+3+x*y);
	printf("%d",Answer);
	
}