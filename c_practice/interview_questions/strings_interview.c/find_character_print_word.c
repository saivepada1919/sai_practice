#include <stdio.h>
int main(){
	char s[30];
	char ch;
	printf("enter the string: ");
	fgets(s,30,stdin);
	int i=0;
	while(s[i]!='\0'){
		if(s[i]=='\n'){
			s[i]='\0';
		}
		i++;
	}

	printf("enter character to find word: ");
	scanf(" %c",&ch);
	i=0;
	while(s[i]!='\0'){
		if(s[i]==ch){
			while(s[i]!=' '&& s[i]!='\0'){
				printf("%c",s[i]);
				i++;
			}
			printf("\n");
			break;
		}
		i++;
	}
	return 0;
}

		

