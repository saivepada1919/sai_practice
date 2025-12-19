#include <stdio.h>
#include <string.h>
void sort(char *str){
	for(int i = 0;str[i] != '\0';i++){
		for(int j = i+1;str[j] != '\0';j++){
			if(str[i] > str[j]){
				char temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}
		}
	}
}
int main(){
	char str1[20];
	char str2[20];
	printf("enter the string1 : ");
	scanf("%s",str1);
	printf("enter the string2 : ");
	scanf("%s",str2);
	if(strlen(str1) != strlen(str2)){
		printf("Not anagram\n");
		return 0;
	}
	sort(str1);
	sort(str2);
	int i = 0;
	while(str1[i]!='\0'){
		if(str1[i] != str2[i]){
			printf("not anagarm\n");
			return 0;
		}
		i++;
	}
	printf("Anagram\n");
	return 0;
}
