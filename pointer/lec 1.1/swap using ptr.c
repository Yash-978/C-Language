//Q.2 Write a Program to swap two variables using Pointers.
//For example,
//Input:
//Enter the value of x: 5
//Enter the value of y: 3
//
//Output:
//Before swapping:
//x: 5
//y: 3
//
//After swapping:
//x: 3
//y: 5
#include<stdio.h>
main()
{
	int *ptr1,*ptr2,temp;
	int a,b;
	printf("Enter the value of ptr1 :");
	scanf("%d",&a);
	printf("Enter the value of ptr1 :");
	scanf("%d",&b);
	ptr1=&a;
	ptr2=&b;
	temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
	printf("After swapping ptr1 =%d and ptr2 = %d ",a,b);
	
}
