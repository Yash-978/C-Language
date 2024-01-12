//Q.1 Write a Program to write even & odd numbers from 50 to 70 into two separate files.
//For example, 
//Output:
//Even numbers from even_file.txt:
//50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70
//
//Odd numbers from odd_file.txt:
//51, 53, 55, 57, 59, 61, 63, 65, 67, 69
#include<stdio.h>
main()
{
	int i;
	FILE *f1;
	FILE *f2;
	f1 = fopen("even.txt","w");
	f2 = fopen("odd.txt","w");
	for (i=50;i<=70;i++)
	{
		if (i%2==0)
		{
			fprintf(f1,"Even number = %d \n",i);
			printf(" %d ",i);
		}
		
	}
	printf("\n");
	for (i=50;i<=70;i++)
	{
		if (i%2!=0)
		{
			fprintf(f2,"Odd number = %d\n",i);
			printf(" %d ",i);
		}
	}
	
	
	
}
