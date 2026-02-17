#include <stdio.h>
int main(){
	char str[] = "sai vepada";
	for(int i = 0;str[i]!='\0';i++){
		if(str[i] >= 97 && str[i] <=122){
			str[i] = str[i] - 32;
		}
	}
	printf("%s\n",str);
}
