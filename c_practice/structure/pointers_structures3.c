#include <stdio.h>
#include <stdlib.h>
struct employee{
	char name[50];
	int age;
};
int main(){
	int n;
	printf("enter the number of employees:");
	scanf("%d",&n);
	struct employee *p;
	p=malloc(n*(sizeof(struct employee)));
	for(int i=0;i<n;i++){
		printf("enter the name of employee(%d):",i+1);
		scanf("%s",p[i].name);
		printf("enter the age:");
		scanf("%d",&p[i].age);
		printf("\n\n");
	}
	printf("%-10s %-10s\n","Name","Age");
	for(int i=0;i<n;i++){
		printf("%-10s %-10d\n",p[i].name,p[i].age);
	}
	return 0;
}

