#include <stdio.h>
#include <string.h>
int main(){
	char str[100];
	printf("enter the string : ");
	fgets(str,100,stdin);
	str[strcspn(str,"\n")]='\0';
	int i = 0;
	while(str[i] != '\0'){
		if(str[i] >= 'a' && str[i] <= 'z'){
			str[i] = str[i] - 32;
		}
		else if(str[i] >= 'A' && str[i] <= 'Z'){
			str[i] = str[i] + 32;
		}
		i++;
	}
	printf("toogled case : %s\n",str);
}
	
