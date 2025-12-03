#include <stdio.h>
#include <string.h>
void palindrome(char *str){
	int len = strlen(str);
	for(int i = 0 ;i<len/2;i++){
		if(str[i] != str[len-1-i]){
			printf("string is not palindrome\n");
			return;
		}
	}
	printf("string is palindrome\n");
}

int main(){
	char str[20];
	printf("enter the string : ");
	scanf("%s",str);
	palindrome(str);
	return 0;
}
