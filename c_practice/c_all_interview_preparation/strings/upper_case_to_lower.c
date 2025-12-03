#include <stdio.h>
int main(){
	char str[20];
	printf("enter string : ");
	fgets(str,20,stdin);
	int i=0;
	while(str[i] != '\0'){
		if(str[i] == '\n'){
			str[i] = '\0';
		}
		i++;
	}
	i=0;
	while(str[i] != '\0'){
		if(str[i] >= 'A' && str[i] <= 'Z'){
			str[i] = str[i] + 32;
		}
		i++;
	}
	printf("uppercase to lowercase : %s\n",str);
	return 0;
}
