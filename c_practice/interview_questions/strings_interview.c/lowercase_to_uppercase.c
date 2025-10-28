#include <stdio.h>
void lower_to_upper(char *str){
	int i=0;
        while(str[i]!=0){
                if(str[i]>96 && str[i]<123){
                        str[i]=str[i]-32;
                }
                i++;
        }

}

int main(){
	char str[100];
	printf("enter the string : ");
	fgets(str,100,stdin);
	int i=0;
	while(str[i]!='\0'){
		if(str[i]=='\n'){
			str[i]='\0';
		}
		i++;
	}
	lower_to_upper(str);
	printf("lower to upper : %s\n",str);
	return 0;
}
