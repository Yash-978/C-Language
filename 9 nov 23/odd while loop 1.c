#include<stdio.h>
#include<conio.h>
main()
{
	int i=1;
	int n;
	printf("Enter the value of n :");
	scanf("%d",&n);
	while(n>=i)
	{
	  	if(n%2==1)
	  	 {
	  	 	printf("%d ",n);
		}
		 n--;
	}
}
