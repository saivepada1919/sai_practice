#include <stdio.h>
#include <string.h>
void copy(char *str1,char *str2){
	int i = 0;
	while(str1[i]!=0){
		str2[i] = str1[i];
		i++;
	}
}
int main(){
	char str1[100];
	char str2[100];
	printf("enter the string : ");
	fgets(str1,100,stdin);
	str1[strcspn(str1,"\n")]='\0';
	int len = strlen(str1);
	if(len > sizeof(str2)){
		printf("copying not possible\n");
		return 0;
	}
	copy(str1,str2);
	printf("string 1 : %s\n",str1);
	printf("string 2 : %s\n",str2);
	return 0;
}
	
