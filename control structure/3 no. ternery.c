#include<stdio.h>
#include<conio.h>
main()
{
	int A,B,C;
	printf("Enter the value of A :");
	scanf("%d",&A);
	printf("Enter the value of B :");
	scanf("%d",&B);
	printf("Enter the value of C :");
	scanf("%d",&C);
	
	(A>B)? (A>C)? printf("A is maximum.") : printf("C is maximum.") : (B>C)?printf("B is maximum.") : printf("C is maximum.");
}
