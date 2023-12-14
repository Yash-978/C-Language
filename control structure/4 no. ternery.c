#include<stdio.h>
#include<conio.h>
main()
{
	int A,B,C,D;
	printf("Enter the value of A :");
	scanf("%d",&A);
	printf("Enter the value of B :");
	scanf("%d",&B);
	printf("Enter the value of C :");
	scanf("%d",&C);
	printf("Enter the value of D :");
	scanf("%d",&D);
	
	(A>B)?(A>C)?(A>D)?printf("A is maximum.") :printf("D is maximum."):(C>D)? printf("C is maximum"): printf("D is maximum."):(B>C)?(B>D)? printf("B is maximum.") : printf("D is maximum.") : (C>D)? printf("C is maximum.") : printf("D is maximum") ;
}
