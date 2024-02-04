#include<stdio.h>
#include<string.h>
#include<conio.h>
main()
{
	int n,i;
	float total=0;
	
	printf("Enter the size of Array :");
	scanf("%d",&n);
	float len[n];
	for (i=0;i<=n;i++)
	{
		printf("Enter the Elements in array length[%d] :",i);
		scanf("%f",&len[i]);
	}
	

	for (i=0;i<=n;i++)
	{
		total=total+len[i];
		//total/2;
	}
	printf("The Sum of Array is %.2f\n",total/2);
	
	
}
