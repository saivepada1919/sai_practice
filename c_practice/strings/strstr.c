#include <stdio.h>
#include <string.h>
int main(){
	char ch[20];
	printf("enter the string:");
	fgets(ch,20,stdin);
	ch[strcspn(ch,"\n")]='\0';
	char s[10];
	printf("enter the sub string to find:");
	fgets(s,10,stdin);
        s[strcspn(s,"\n")]='\0';
	char *res = strstr(ch,s);
	if(res != NULL){
		printf("sub string foun at index:%ld",res-ch);
	}
	else{
		printf("not found\n");
	}
	return 0;
}
