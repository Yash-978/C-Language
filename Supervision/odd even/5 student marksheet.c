////Q.2 Write a Program to generate mark sheets for a student. Enter the marks of 5 students in Chemistry, Mathematics, and Physics (each out of 100) using a Structure having attributes: roll no, name, chem_marks, maths_marks, and phy_marks. Display the percentage of each student.
////For example,
////Input:
////Enter details of Student 1:
////Roll no => 121
////Name => Raj Patel
////Chemistry => 95
////Mathematics => 90
////Physics => 88
#include<stdio.h>
#include<string.h>
struct marksheet
{
	char name[50];
	int chem,maths,physics,total_marks;
	float per;
};
main()
{
	struct marksheet ms[5];
	int n,i,total_marks,chem,maths,physics;
	float per;
	char name[50];
	printf("Enter quantity of student :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d student \n",i);
		printf("Enter the name :\n");
		gets(name);
		strcpy(name,name);
		scanf("%s",&ms[i].name);
	
		printf("Enter the Chemistry marks :\n");
		scanf("%d",&ms[i].chem);
		
		printf("Enter the Mathematics marks :\n");
		scanf("%d",&ms[i].maths);
		
		printf("Enter the Physics marks :\n");
		scanf("%d",&ms[i].physics);
		
		
		printf("\n");
	}
	printf("\n");
	for (i=1;i<=n;i++)
	{
		printf("Student name = %s.\n",ms[i].name);
		printf("Chemistry marks = %d.\n",ms[i].chem);
		printf("Mathematics marks = %d.\n",ms[i].maths);
		printf("Physics marks = %d.\n",ms[i].physics);
		printf("Total marks is : %d\n",ms[i].chem + ms[i].maths + ms[i].physics);
		ms[i].total_marks=ms[i].chem + ms[i].maths + ms[i].physics;
		ms[i].per=(ms[i].total_marks*100)/300;
		printf("Percentage marks is : %f\n",ms[i].per);
	}
}
