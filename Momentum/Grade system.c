#include<stdio.h>
main()
{
	int p,c,b,m,com,total;
	float per;
	printf("Physics marks :");
	scanf("%d",&p);
	printf("Chemistry marks :");
	scanf("%d",&c);
	printf("Biology marks :");
	scanf("%d",&b);
	printf("Maths marks :");
	scanf("%d",&m);
	printf("Computer marks :");
	scanf("%d",&com);
	total=p+c+b+m+com;
	per=total/5;
	printf("Percentage is %.2f\n",per);
	
	if (per>=90 && per<=100)
	{
		printf("Grade A.");
	}
	else if (per>=80 && per<=90)
	{
		printf("Grade B.");
	}
	else if (per>=70 && per<=80)
	{
		printf("Grade C.");
	}
	else if (per>=60 && per<=70)
	{
		printf("Grade D.");
	}
	else if (per>=40 && per<50)
	{
		printf("Grade E.");
	}
	else if (per<40)
	{
		printf("Needs Improvement.");
	}
}