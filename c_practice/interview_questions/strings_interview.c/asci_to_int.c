#include <stdio.h>
#include <string.h>
int main(){
	char str[100];
	printf("enter the string : ");
	fgets(str,100,stdin);
	str[strcspn(str,"\n")]='\0';
	int count=0;
	int i=0;
	int j=0;
	int sign = 1;
	int result = 0;
	while(j<2){
		if(str[j]=='+' || str[j] == '-'){
			count++;
		}
		j++;
	}
	if(count == 2){
		printf("result : %d\n",result);
		return 0;
	}
	while(str[i]==' '){
		i++;
	}
	while(str[i]!='\0'){
		if(str[i] == '+' || str[i] == '-' || (str[i] >='0' && str[i] <= '9')){
			if(str[i]=='-'){
				sign =-1;
			}
			if(str[i]>='0' && str[i]<='9'){
				result = result *10+str[i]-'0';
			}
		}
		else{
			break;
		}
		i++;
	}
	printf("result %d\n",result*sign);
	return 0;
}

