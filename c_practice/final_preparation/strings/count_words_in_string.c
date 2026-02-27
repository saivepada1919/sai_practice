#include <stdio.h>
int main(){
	char str[] = "hello sai bro";
	int i = 0;
	int flag = 0;
	int count = 0;
	while(str[i] != '\0'){
		if(str[i] != ' '){
			if(flag == 0){
				count++;
				flag = 1;
			}
		}
		else{
			flag = 0;
		}
		i++;
	}
	printf("count of words : %d",count);
}
