#include <string.h>
#include <stdio.h>
void compare(char *str1,char *str2,int l1,int l2){
	if(l1 != l2){
		printf("strings are not same \n");
		return;
	}
	int i=0,same = 0;
	while(str1[i] != '\0'){
		if(str1[i] != str2[i]){
			same = 1;
			break;
		}
		i++;
	}
	if(same == 1){
		printf("both strings are not same \n");
	}
	else{
		printf("both strings are same\n");
	
}

int main(){
	char str1[20];
	char str2[20];
	printf("enter the string1 : ");
	fgets(str1,20,stdin);
	printf("enter the string2 : ");
	fgets(str2,20,stdin);
	str1[strcspn(str1,"\n")]='\0';
	str2[strcspn(str2,"\n")]='\0';
	int l1 = strlen(str1);
	int l2 = strlen(str2);
	compare(str1,str2,l1,l2);
	return 0;
}
