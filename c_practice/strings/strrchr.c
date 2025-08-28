#include <stdio.h>
#include <string.h>
int main(){
	char ch[20];
	printf("enter the string:");
	fgets(ch,20,stdin);
	ch[strcspn(ch,"\n")]='\0';
	char s;
	printf("enter the character to find:");
	scanf("%c",&s);
	char *res = strrchr(ch,s);
	if (res != NULL){
		printf("charcter found at index:%ld",res-ch);
	}
	else{
		printf("not found\n");
	}
	return 0;
}


