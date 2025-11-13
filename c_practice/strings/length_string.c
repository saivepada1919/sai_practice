#include <stdio.h>
int length(char *s){
	int i=0;
	while(s[i]!=0){
		i++;
	}
	return i;
}
int main(){
	char s[100];
	printf("enter string: ");
	fgets(s,sizeof(s),stdin);
	int i=0;
	while(s[i]!='\0'){
		if(s[i]=='\n'){
			s[i]='\0';
		}
		i++;
	}
	int len=length(s);
	printf("length od given string: %d\n",len);
	return 0;
}
