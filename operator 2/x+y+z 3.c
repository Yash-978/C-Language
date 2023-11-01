#include<stdio.h>
#include<conio.h>
main()
{
	int x;
	int y;
	int z;
	int Answer;
	printf("Enter the value of x :");
	scanf("%d",&x);
	printf("Enter the value of y :");
	scanf("%d",&y);
	printf("Enter the value of y :");
	scanf("%d",&z);
	
	Answer=(x*x*x+3*x*x*y+3*x*y*y+y*y*y+3*x*x*z+6*x*y*z+3*y*y*z+3*x*z*z+3*y*z*z+z*z*z);
	printf("%d",Answer);
}