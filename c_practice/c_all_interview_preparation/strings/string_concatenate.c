#include <stdio.h>
#include <string.h>
void concatenate(char *str1,char *str2,int l1,int l2){
	int i = 0;
	while(i!=l2){
		str1[l1+i] = str2[i];
		i++;
	}
	str1[l1+i] = '\0';
}
int main(){
	char str1[100];
	char str2[20];
	printf("enter string 1 : ");
	fgets(str1,100,stdin);
	printf("enter string 2 : ");
	fgets(str2,20,stdin);
	str1[strcspn(str1,"\n")]='\0';
	str2[strcspn(str2,"\n")]='\0';
	int l1 = strlen(str1);
	int l2 = strlen(str2);
	printf("beofore concatenate two strings\n");
	printf("string 1 : %s\n",str1);
	printf("string 2 : %s\n",str2);
	concatenate(str1,str2,l1,l2);
	printf("after concatenate string 1 : %s\n",str1);
	return 0;
}
	
