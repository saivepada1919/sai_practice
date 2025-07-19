#include <stdio.h>
int main(){
	char name[20];
	int age;
	printf("enter your name :");// Enter your name: Sai Vepada
	fgets(name,sizeof(name),stdin);
	printf("enter your age: ");// Enter your age
	scanf("%d",&age);
	printf("%s is %d years old\n",name,age);
	return 0;
}
	
