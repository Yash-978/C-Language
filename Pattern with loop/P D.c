#include<stdio.h>
#include<conio.h>
main()
{
	int i,j;
	for (i=1; i<=7; i++)
	{
		for(j=1;j<=7; j++)
		{
			if ((i==1 &&  (j==1 || j==3) ) || (i==2 && (j==1 || j==5)) || (i==3 && (j==1 || j==6)) || (i==4 && (j==1 || j==7) || (i==5 && (j==1 || j==6)) ) || (i==6 && (j==1 || j==5) ) || (i==7 && (j==1 || j==3 ) ) )
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	
}