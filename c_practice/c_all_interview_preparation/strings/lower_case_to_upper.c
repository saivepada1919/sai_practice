#include <stdio.h>
#include <string.h>
int main(){
	char str[20];
	printf("enter string : ");
	fgets(str,20,stdin);
	str[strcspn(str,"\n")] = '\0';
	int i = 0;
	while(str[i]!='\0'){
		if(str[i] >='a' && str[i] <= 'z'){
			str[i] = str[i]-32;
		}
		i++;
	}
	printf("lowercase to uppercase : %s\n",str);
}
