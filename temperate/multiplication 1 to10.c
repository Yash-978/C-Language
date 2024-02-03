//wap to printf multiplication table of 1 to 10
#include<stdio.h>
main()
{
	int i,j,k;
	for (i=1;i<=10;i++)
	{
		for (j=1;j<=10;j++)
		{
			printf("%d X %d = %d\n",i,j,i*j);
			
		
		}
		printf("\n");
	}
}
