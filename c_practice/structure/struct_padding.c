#include <stdio.h>
struct student{
	char name[50];
	int age;
	float percent;
};
int main(){
	printf("size :%lu",sizeof(struct student));
	return 0;
}
