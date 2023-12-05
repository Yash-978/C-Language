//41
//41 42
//41 42 43
//41 42 43 44
//41 42 43 44 45
#include<stdio.h>
main()
{
	int x,y;
	for (x=41; x<=45; x++)
	{
		for(y=41; y<=x; y++)
		{
			printf("%d ",y);
		}
		printf("\n");
	}
	
}
