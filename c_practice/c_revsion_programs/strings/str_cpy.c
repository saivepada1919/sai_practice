#include <stdio.h>
int main(){
	char s1[100] = "hello";
	char s2[100];
	int i;
	for(i=0;s1[i]!='\0';i++){
		s2[i] = s1[i];
	}
	s2[i] = '\0';
	printf("sting 2 : %s\n",s2);
}	
