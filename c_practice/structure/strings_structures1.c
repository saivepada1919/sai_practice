#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct names{
	char name[50];
};
int main(){
	struct names n;
	printf("enter the name: ");
	fgets(n.name,sizeof(n.name),stdin);
	n.name[strcspn(n.name,"\n")]='\0';
	printf("name is:%s\n",n.name);
	return 0;
}
