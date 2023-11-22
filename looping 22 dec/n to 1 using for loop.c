#include<stdio.h>
#include<conio.h>
main()
{
	int x=1;
	int y;
	printf("Enter the value :");
	scanf("%d",&y);
	
	for(x=1; y>=x;y-=1)
	{
	   printf("%d\n",y);
	}
	
	
	
}