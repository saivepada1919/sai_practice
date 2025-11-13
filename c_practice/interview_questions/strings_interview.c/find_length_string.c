#include <stdio.h>
int main(){
	char str[100];
	printf("enter the string  : ");
	fgets(str,100,stdin);
	int len=0,i=0;
	while(str[i] != '\0'){
		if(str[i] == '\n'){
			str[i] = '\0';
		}
		i++;
	}
	while(str[len]!='\0'){
		len++;
	}
	printf("length of the string : %d\n",len);
	return 0;
}

