#include<stdio.h>
main()
{
	int i,j,f=1,l;
	char str[25];
	
	printf("Enter your string :");
	gets(str);
	
	l = strlen(str);
	
	for (i=0;i<l;i++)
	{
		for (j=i+1;j<l;j++)
		{
			if (str[i]==str[j])
			{
				f++;
				str[j]=0;
			}
		}
		
		
		
		
		
		if (str[i]!=0)
		{
			printf("%c = %d\n",str[i],f);
			f=1;
		}
	}
}