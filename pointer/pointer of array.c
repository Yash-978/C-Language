//Q.1 Write a Program to find the reverse of a 1D array using a Chain of Pointers.
//For example,
//Input:
//Enter the array's size: 5
//
//
//Enter array elements:
//a[0] = 5
//a[1] = 9
//a[2] = 4
//a[3] = 7
//a[4] = 3
//
//Output:
//Reversed array elements:
//3, 7, 4, 9, 5
#include<stdio.h>
main ()
{
	int i,j;
	int a[j];
	printf("Enter the size of array :");
	scanf("%d",&j);
	for (i=0;i<j;i++)
	{
		printf("Enter the value in array a[%d] :",i);
		scanf("%d",&a[i]);
	}
	int *ptr = &a[j-1];
	for (i=j-1;i>=0;i--)
	{
		printf("%d\n",*ptr);
		ptr-=1;
	}
}

