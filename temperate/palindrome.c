//7. wap to check number is palindrom or not.
#include<stdio.h>
main()
{
	int i,k,r,a=0,sum=1;
	printf("Enter the number :");
	scanf("%d",&k);
	int b=k;
	while(k>0)
	{
      
      r=k%10;
      a=r+(a*10);
      k=k/10;
		
	}
	if(a==b)
	{
		printf("its palindrome ");
	}
	else
	{
		printf("its not palindrome");
	}
}
