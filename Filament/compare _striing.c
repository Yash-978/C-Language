#include<stdio.h>
#include<string.h>
main()
{
	int i,l,f=1;
	char str1[25];
	char str2[25];
	
	printf("Enter the 1st string :");
	gets(str1);
	printf("Enter the 2nd string :");
	gets(str2);
	
	l=strlen(str1);
	if (str1[i]==str2[i])
	{
		printf("Both are the same string.");
	}
	else 
	{
		printf("Both string are not same.");
	}
}