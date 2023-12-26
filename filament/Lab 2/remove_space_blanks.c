#include<stdio.h>
#include<string.h>
main()
{
	int i;
	char str[25];
	printf("Enter the string :");
	gets(str);
	int l=strlen(str);
	for (i=0;i<l;i++)
	{
		if (str[i]==' ')
		{
			str[i]=str[+1];
		}
	}
	puts(str);
}