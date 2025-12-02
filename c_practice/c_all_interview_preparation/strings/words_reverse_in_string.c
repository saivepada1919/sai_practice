#include <stdio.h>
#include <string.h>
void reverse(char *str1,int s,int e){
	while(s<e){
		char temp = str1[s];
		str1[s] = str1[e];
		str1[e] = temp;
		s++;
		e--;
	}
}
int main(){
	char str1[100];
	printf("enter the string \n");
	fgets(str1,100,stdin);
	str1[strcspn(str1,"\n")]='\0';
	int len = strlen(str1);
	int s=0,e=len-1;
	reverse(str1,s,e);
	s = 0;
	e = 0;
	while(str1[e]!='\0'){
		if(str1[e] == ' ' || str1[e] == '\t'){
			reverse(str1,s,e-1);
			s = e+1;
		}
		e++;
	}
	reverse(str1,s,e-1);
	printf("%s",str1);
}

