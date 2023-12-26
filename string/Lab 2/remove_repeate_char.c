#include<stdio.h>
#include<string.h>
main()
{
	int i,j;
	char str[25];
	printf("Enter the string :");
	gets(str);
	int l=strlen(str);
	for (i=0;i<l;i++)
	{
		for (j=i+1;j<l;j++)
		{
			if (str[i]==str[j])
			{
				str[j]=0;
			}
		}
		if (str[i]!=0)
		{
			printf("%c",str[i]);
		}
	}
}
	
