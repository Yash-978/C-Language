#include<stdio.h>
#include<conio.h>
main()
{
	int x;
	int y;
	int sum=0;
	printf("Enter the value :");
	scanf("%d",&y);
	
	for(x=1; x<=y;x++)
	{
	   sum=sum+x;
	   
	}
	
	printf("%d\n",sum);
	
}