#include <stdio.h>
struct student{
	char name[50];
	int roll;
	float percentage;
};
int main(){
	//Basic program in structures taking inputs from user
	struct student s1;
	printf("enter the name :");
	scanf(" %[^\n]",s1.name);
	printf("enter roll no of student:");
        scanf("%d",&s1.roll);
	printf("enter the percentage:");
	scanf("%f",&s1.percentage);
	printf("\nstudent detials\n");
	printf("Student name:%s\n",s1.name);
	printf("Student roll no:%d\n",s1.roll);
	printf("Student percentage:%.2f\n",s1.percentage);
	return 0;
}

