#include <stdio.h>
int main(){
	char str[] = "helo sai bro";
	int count = 0;
	int flag = 0;
	for(int i = 0;str[i] !='\0';i++){
		if(str[i] != ' ' && str[i] != '\t'){
			if(flag == 0){
				flag =1;
				count++;
			}
		}
		else{
			flag = 0;
		}
	}
	printf("coun of words : %d\n",count);
}
