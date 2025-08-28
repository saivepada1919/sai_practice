#include <stdio.h>
#include <string.h>
int main(){
        char c[20];
        printf("enter the string:");
        fgets(c,20,stdin);
        c[strcspn(c,"\n")]='\0';
        printf("original string:%s\n",c);
	char b[]="Happy boy";
	//strncat(c,b,5);
	strcat(c,b);
	//printf("after concatenate n characters: %s\n",c);
	printf("after concatenate: %s\n",c);
	return 0;
}
