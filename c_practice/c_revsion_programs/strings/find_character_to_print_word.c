#include <stdio.h>
int main(){
	char str[] = "sai is good boy";
	char c = 's';
	for(int i = 0;str[i] != '\0';i++){
		if(str[i] == c){
			while(str[i] != ' ' && str[i] != '\t'){
				printf("%c",str[i]);
				i++;
			}
			break;
		}
	}
}
