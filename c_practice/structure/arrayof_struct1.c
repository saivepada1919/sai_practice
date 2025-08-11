#include <stdio.h>
struct student{
	char name[50];
	int roll;
	float percent;
};
int main(){
	int n;
	printf("enter no of students:");
	scanf("%d",&n);
	struct student s[n];
	for (int i=0;i<n;i++){
		printf("Enter the name of the student%d:",i+1);
		scanf(" %[^\n]",s[i].name);
		printf("Enter the roll no of the student%d:",i+1);
		scanf("%d",&s[i].roll);
		printf("Enter the percentage of the student%d:",i+1);
		scanf("%f",&s[i].percent);
	}
	printf("%-10s %-10s %-10s %-10s\n","S.No","Name","Roll","Percentage" );
	for(int i=0;i<n;i++){
		printf("%-10d %-10s %-10d %-10.2f\n",i+1,s[i].name,s[i].roll,s[i].percent);
	}
	return 0;
}
