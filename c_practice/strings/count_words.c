#include <stdio.h>
int main(){
	char str[100];
	printf("enter the string:");
	fgets(str,sizeof(str),stdin);
	int i=0;
	while(str[i]!='\0'){
		if(str[i]=='\n'){
			str[i]='\0';
		}
		i++;
	}
	int words=0;
	int flag=0;
	i=0;
	while(str[i]!='\0'){
		if(str[i] != ' ' && str[i] != '\t'){
			if(flag == 0){
				flag = 1;
				words++;
			}
		}
		else{
			flag=0;
		}
		i++;
	}
	printf("no of words in given string: %d\n",words);
	return 0;
}


