#include <stdio.h>
#include <string.h>
int count(char *str){
	int count = 0,i = 0;
	int words = 0;
	while(str[i] != '\0'){
		if(str[i] != ' ' || str[i] == '\t')
		{
			if(count == 0){
				words++;
				count = 1;
			}
		}
		else{
			count = 0;
		}
		i++;

	}
	return words;
}

int main(){
	char str[100];
	printf("enter the string : ");
	fgets(str,100,stdin);
	str[strcspn(str,"\n")] = '\0';
	int words = count(str);
	printf("no of words in string : %d\n",words);
	return 0;
}
