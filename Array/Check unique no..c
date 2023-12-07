#include<stdio.h>
main()
{
	int j;
	int i;
	int a[8]={9,6,2,8,9,2};
	int check=0;
	for (i=0;i<8;i++)
	{
		for (j=0;j<8;j++)
		{
			if(a[i]==a[j] && (i!=j))
			{
				check=1;
			}
		}
		if (check==0)
		{
			printf("%d ",a[i]);
		}
		check=0;
	}
}

