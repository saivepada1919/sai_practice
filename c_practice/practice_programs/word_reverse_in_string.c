#include <stdio.h>
#include <string.h>
void reverse(char *s,char *e){
	while(s<e){
		char temp = *s;
		*s = *e;
		*e = temp;
		s++;
		e--;
	}
}
int main(){
	char str[100];
	printf("enter string : ");
	fgets(str,100,stdin);
	str[strcspn(str,"\n")] = '\0';
	char *s = str;
	char *e = str;
	int i = 0;
	while(*e){
		if(str[i] == ' ' || str[i] == '\t'){
			reverse(s,e-1);
			s = e+1;
		}
		e++;
		i++;
	}
	reverse(s,e-1);
	printf("reverse string : %s\n",str);
	return 0;
}


	

