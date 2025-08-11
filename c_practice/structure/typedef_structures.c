#include <stdio.h>
#include <string.h>
typedef struct student{
	char name[50];
	int age;
}student;
int main(){
	student s1;
	strcpy(s1.name,"sai vepada");
	s1.age=21;
	printf("name:%s\n",s1.name);
	printf("age:%d\n",s1.age);
	return 0;
}
