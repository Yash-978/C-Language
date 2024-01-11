//Q.1 Write a Program to create Student Record System for 3 students using structure. Consider the below-mentioned attributes in the Student structure:
//- stu_id
//- stu_name
//- stu_age
//- stu_course
//- stu_city
//- stu_standard
//- stu_school
#include<stdio.h>
struct student
{
	char stu_name[50];
	int stu_standard;
	int stu_id;
	int stu_age;
	char stu_course[60];
	char stu_school[50];
	char stu_city[30];
};
main()
{
	int i,j;
	struct student s[3];
	
	for(i=0;i<3;i++)
	{
		
		printf("Enter the name :\n");
		scanf("%s",&s[i].stu_name);
		
		printf("Enter the standard :\n");
		scanf("%d",&s[i].stu_standard);
		
		printf("Enter student the id :\n");
		scanf("%d",&s[i].stu_id);
		
		printf("Enter your age :\n");
		scanf("%d",&s[i].stu_age);
		
		printf("Enter the course name :\n");
		scanf("%s",&s[i].stu_course);
		
		printf("Enter the school name :\n");
		scanf("%s",&s[i].stu_school);
		
		printf("Enter the city :\n");
		scanf("%s",&s[i].stu_city);
		printf("\n");
		
	}
	for(i=0;i<3;i++)
	{
		printf("Name is : %s\n",s[i].stu_name);
		printf("Studeant standard is : %d\n",s[i].stu_standard);
		printf("Student id is : %d\n",s[i].stu_id);
		printf("Student is : %d\n",s[i].stu_age);
		printf("Student course is : %s\n",s[i].stu_course);
		printf("School name is : %s\n",s[i].stu_school);
		printf("City is : %s\n",s[i].stu_city);
		printf("\n");
		
	}
	
	

}

