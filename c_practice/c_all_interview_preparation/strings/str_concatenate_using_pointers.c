#include <stdio.h>
#include <string.h>
void concatenate(char *str1,char *str2){
	int l1 = strlen(str1);
        int l2 = strlen(str2);
	int i;
	for(i = 0;*(str2+i)!='\0';i++){
		*(str1+(l1+i)) = *(str2+i);
	}
	*(str1+(l1+i)) = '\0';
}


int main(){
	char str1[100];
	char str2[100];
	printf("enter the string 1: ");
	fgets(str1,100,stdin);
	str1[strcspn(str1,"\n")] = '\0';
	printf("enter the string 2 : ");
	fgets(str2,100,stdin);
	str2[strcspn(str2,"\n")] = '\0';
	concatenate(str1,str2);
	printf("after concatenate string : %s\n",str1);
	return 0;
}


