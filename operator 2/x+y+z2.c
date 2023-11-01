#include<stdio.h>
#include<conio.h>
main()
{   //x2+y2+z2+2xy+2yz+2xz
	int x;
	int y;
	int z;
	int Answer;
	printf("Enter the value of x :");
	scanf("%d",&x);
	printf("Enter the value of y :");
	scanf("%d",&y);
	printf("Enter the value of z :");
	scanf("%d",&z);
	
	Answer=x*x+y*y+z*z+2*x*y+2*y*z+2*x*z;
	printf("%d",Answer);
	
}
