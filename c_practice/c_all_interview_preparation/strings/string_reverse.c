#include <stdio.h>
#include <string.h>
int main(){
	char str[20];
	printf("enter the string : ");
	fgets(str,20,stdin);
	str[strcspn(str,"\n")] = '\0';
	int len = strlen(str);
	for(int i=0 ;i<len/2;i++){
		char temp = str[i];
		str[i] = str[len-1-i];
		str[len-1-i] = temp;
	}
	printf("reversed string : %s\n",str);
}



