#include <stdio.h>
struct student{
	char name[50];
	int roll;
	float percent;
};
int diaplayStudent(struct student s){
	printf("student detials:%-10s %-10d %-10.2f",s.name,s.roll,s.percent);
	return 0;
}
int main(){
	struct student s;
	printf("enter the name: ");
	scanf(" %[^\n]",s.name);
	printf("enter the roll no: ");
	scanf("%d",&s.roll);
	printf("enter the percentage of student: ");
	scanf("%f",&s.percent);
	displayStudent(s);
	return 0;
}

