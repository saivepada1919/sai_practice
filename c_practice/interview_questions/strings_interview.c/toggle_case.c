#include <stdio.h>
void toggle_case(char *str){
	int i=0;
	while(str[i]!='\0'){
		if(str[i]>64 && str[i]<91){
			str[i]=str[i]+32;
		}
		else if(str[i]>96 && str[i]<123){
			str[i] = str[i]-32;
		}
		i++;
	}
}

int main(){
	char str[100];
	printf("enter string:");
	fgets(str,100,stdin);
	int i=0;
	while(str[i]!='\0'){
		if(str[i]=='\n'){
			str[i]='\0';
		}
		i++;
	}
	toggle_case(str);
	printf("after toggle string: %s\n",str);
	return 0;
}
