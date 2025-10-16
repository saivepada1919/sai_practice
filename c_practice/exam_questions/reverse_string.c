#include <stdio.h>
#include <string.h>
int main(){
	char str[]="hello";
	int s=0;
	int e=strlen(str)-1;
	printf("before reversing the string : %s\n",str);
	while(s<e){
		char temp=str[s];
		str[s]=str[e];
		str[e]=temp;
		s++;
		e--;
	}
	printf("after reverse the string : %s\n",str);
	return 0;
}
