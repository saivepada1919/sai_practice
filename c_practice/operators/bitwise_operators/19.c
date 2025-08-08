#include <stdio.h>
char givenchar(char ch){
	if(ch >='A' && ch <='Z'){
		printf("%c is uppercase\n",ch);
	}
	else if(ch >='a' && ch <='z'){
		printf("%c is lowercase\n",ch);
	}else{
		printf("not a character otr invalid input\n");
	}
}
int main(){
	char ch;
	printf("enter the character:");
	scanf(" %c",&ch);
	givenchar(ch);
	return 0;
}
