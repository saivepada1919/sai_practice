#include <stdio.h>
void count(char *str){
	int vowels = 0,conso = 0;
	for(int i=0;str[i] != '\0';i++){
		if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')){
			if(str[i] == 'A'|| str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'o' || str[i] == 'i' || str[i] == 'e'){
				vowels++;
			}
			else{
				conso++;
			}
		}
	}
	printf("vowels in given string : %d\n",vowels);
	printf("consonants in given string : %d\n",conso);
}
int main(){
	char str[100];
	printf("enter the string : ");
	fgets(str,100,stdin);
	count(str);
	return 0;
}
