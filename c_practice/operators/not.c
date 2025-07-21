#include <stdio.h>
int main(){
	char ch;
	printf("enter character:");
	scanf(" %c",&ch);
	if(!(ch == 'a' || ch =='e' || ch == 'i' || ch == 'o' ||
	    ch == 'u' || ch == 'A' || ch == 'E' || ch =='I' || ch == 'O' || ch == 'U')){
		printf("%c is not vowel\n",ch);
	}
	else{
		printf("%c is vowel\n",ch);
	}
	return 0;
}

