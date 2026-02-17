#include <stdio.h>
#include <string.h>
void reverse(char *str,int s,int e){
	while(s<e){
		char temp = str[s];
		str[s] = str[e];
		str[e] = temp;
		s++;
		e--;
	}
}
int main(){
	char str[] = "i love embedded";
	printf("%s\n",str);
	reverse(str,0,strlen(str)-1);
	int s = 0;
	int e = 0;
	while(str[e] !='\0'){
		if(str[e] == ' '){
			reverse(str,s,e-1);
			s = e+1;
		}
		e++;
	}
	reverse(str,s,e-1);
	printf("%s\n",str);
}
	
