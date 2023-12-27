/*Q.2 Write a Program to check if a given number is divisible by both 3 & and 5 or not by using UDF.For example,
Input:
Enter any number: 15
*/
#include<stdio.h>
void div()
{
	int i,sum;
	printf("Enter any number :\n");
	scanf("%d",&i);
	if (i%3==0)
	{
		if (i%5==0)
		{
			printf("The number is divisible by 5.");
		}
		else
		{
			printf("The number is not divisible by 5.");
		}
	}
	else 
	{
		printf("The number is not divisible by 3.");
	}
//	printf("The cube of %d is %d",i,sum);
//	cube();
}
main()
{
	div();
}
