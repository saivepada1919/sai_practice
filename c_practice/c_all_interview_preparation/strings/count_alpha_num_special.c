#include <stdio.h>
int main(){
	int alpha = 0,num = 0,spec = 0;
	char str[100];
	printf("enter the string : ");
	fgets(str,100,stdin);
	int i = 0;
	while(str[i] != '\0'){
		if(str[i] == '\n'){
			str[i] ='\0';
		}
		i++;
	}
	i=0;
	while(str[i]!='\0'){
		if(str[i] >= '0' && str[i] <= '9'){
			num++;
		}
		else if(str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z'){
			alpha++;
		}
		else{
			spec++;
		}
		i++;
	}
	printf("alphabet characters : %d\n",alpha);
	printf("numbers character : %d\n",num);
	printf("special caharacters : %d\n",spec);
	return 0;
}
