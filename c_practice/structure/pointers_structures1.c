#include <stdio.h>
#include <stdlib.h>
struct vechile{
	char car[50];
	char bike[50];
	char cycle[50];
};
int main(){
	struct vechile v;
	struct vechile *p;
	p=malloc(sizeof(struct vechile));
	printf("enter the vechiles:");
	scanf("%s%s%s",p->car,p->bike,p->cycle);
	printf("car:%s\nbike:%s\ncycle:%s\n",p->car,p->bike,p->cycle);
	return 0;
}

