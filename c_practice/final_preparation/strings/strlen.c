#include <stdio.h>
int length(char str[]){
	int len = 0 ;
	while(str[len] != '\0'){
		len++;
	}
	return len;
}
int main(){
	char str[100];
	printf("enter the string : ");
	scanf("%[^\n]",str);
	printf("Length of given string : %d\n",length(str));
	return 0;
}
