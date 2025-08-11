#include <stdio.h>
#include <string.h>
struct names{
	char name[50];
};
int main(){
	struct names n;
	strcpy(n.name,"sai vepada");
	printf("name is:%s\n",n.name);
	return 0;
}

