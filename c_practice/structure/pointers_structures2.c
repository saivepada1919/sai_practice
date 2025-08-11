#include <stdio.h>
#include <stdlib.h>
struct student {
	char name[50];
	int roll;
};
int main(){
	struct student s;
	struct student *p;
	p=malloc(sizeof(struct student));
	printf("enter the name and roll no;");
	scanf("%s%d",p->name,&p->roll);
	printf("name is %s and my rool no is %d\n",p->name,p->roll);
	return 0;
}
