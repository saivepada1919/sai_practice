#include <stdio.h>
void upper_to_lowercase(char *str){
	int i=0;
	while(str[i]!=0){
		if(str[i]>64 && str[i]<91){
			str[i]=str[i]+32;
		}
		i++;
	}
}
int main(){
	char str[100];
	printf("enter the string: ");
	fgets(str,100,stdin);
	int i=0;
	while(str[i]!='\0'){
		if(str[i]=='\n'){
			str[i]='\0';
		}
		i++;
	}
	upper_to_lowercase(str);
	printf("after uppercase to lowercase :%s\n",str);
	return 0;
}

