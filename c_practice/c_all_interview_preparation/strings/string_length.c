#include <stdio.h>
int length(char *str){
	int len = 0;
	while(str[len]!='\0'){
		len++;
	}
	return len;
}
int main(){
	char str[100];
	printf("enter the string : ");
	fgets(str,100,stdin);
	int  i = 0;
	while(str[i] != '\0'){
		if(str[i] == '\n'){
			str[i] = '\0';
		}
		i++;
	}
	int len =  length(str);
	printf("Length of given string : %d\n",len);
	return 0;
}

