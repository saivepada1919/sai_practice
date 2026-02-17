#include <string.h>
#include <stdio.h>
int main(){
	char str[20];
	printf("enter the string : ");
	fgets(str,20,stdin);
	str[strcspn(str,"\n")] = '\0';
	int i = 0;
	int sign = 1;
	int res = 0;
	while(str[i] == ' '){
		i++;
	}
	if(str[i]== '-'){
		sign = -1;
		i++;
	}
	else if(str[i] == '+'){
		sign = 1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9'){
		res = res*10 +(str[i]-'0');
		i++;
	}
	res = res*sign;
	printf("asci to integer value : %d\n",res);
	return 0;
}




