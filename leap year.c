#include<stdio.h>
main()
{
	int start_year,end_year,total_year,a;
	printf("Enetr the starting year :");
	scanf("%d",&start_year);
	printf("Enetr the Ending year :");
	scanf("%d",&end_year);
	total_year=end_year-start_year;
	a=(total_year/4)+1;
	printf("The total Leap year between %d and %d are %d",start_year,end_year,a);
	
}