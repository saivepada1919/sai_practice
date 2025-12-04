#include <stdio.h>
#include <string.h>
void compare(char *str1,char *str2){
	int i = 0,same = 1;
	while(*(str1+i) != '\0'){
		if(*(str1+i) != *(str2+i)){
			printf("both strings are not equal\n");
			return;
		}
		i++;
	}
	printf("both strings are same\n");
}
int main(){
	char str1[20];
	char str2[20];
	printf("enter string 1: ");
	fgets(str1,20,stdin);
	str1[strcspn(str1,"\n")] = '\0';
	printf("enter string 2: ");
	gets(str2);
	int l1 = strlen(str1);
	int l2 = strlen(str2);
	if(l1 != l2){
		printf("strings are not equal\n");
		return 0;
	}
	compare(str1,str2);
	return 0;
}

