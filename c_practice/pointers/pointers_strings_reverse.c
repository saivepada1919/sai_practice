#include <stdio.h>
#include <string.h>
int main(){
	char c[] = "VEPADA";
	char *start = c;
	char *end= c + strlen(c) -1;
	printf("Orginal name:%s\n",c);
	while(start<end){
		char temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
	printf("Reversed elements:%s\n",c);
	return 0;
}


