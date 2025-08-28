#include <stdio.h>
#include <string.h>
int main(){
	char c[20];
	printf("enter the string:");
	fgets(c,20,stdin);
	c[strcspn(c,"\n")]='\0';
	printf("original string:%s\n",c);
	char s[20];
	char str[20]; 
	strncpy(s,c,4);
	strcpy(str,c);
	printf("n copied string:%s\n",s);
	printf("copied string:%s\n",str);
	return 0;
}


