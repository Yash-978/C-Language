/*Q.1 Write a Program to find the cube of a given number using UDF.For example,
Input:
Enter any number: 5
*/
#include<stdio.h>
void cube()
{
	int i,sum;
	printf("Enter any number :\n");
	scanf("%d",&i);
	sum=i*i*i;
	printf("The cube of %d is %d\n",i,sum);
	cube();
}
main()
{
	cube();
}
