#include <stdio.h>
struct address{
	char city[50],state[50];
	int pincode;
};
struct student{
	char name[50];
	struct address a;
};
int main(){
	struct student s;
	printf("Enter the name of student: ");
	scanf("%s",s.name);
	printf("Enter the city: ");
	scanf("%s",s.a.city);
	printf("Enter the state: ");
	scanf("%s",s.a.state);
	printf("Enter the pincode: ");
	scanf("%d",&s.a.pincode);
	printf("Student Details\n");
	printf("Name: %s\n",s.name);
	printf("City: %s\n",s.a.city);
	printf("State: %s\n",s.a.state);
	printf("Pincode: %d\n",s.a.pincode);
	return 0;
}
