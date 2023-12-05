//41
//41 42
//41 42 43
//41 42 43 44
//41 42 43 44 45
#include<stdio.h>
main()
{
	int x,y,z=11;
	for (x=11; x<=15; x++)
	{
		for(y=11; y<=x; y++)
		{
			printf("%d ",z);
			z++;
		}
		printf("\n");
	}
	
}
