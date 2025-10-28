#include <stdio.h>
int main(){
	char str1[100];
	char str2[100];
	printf("enter the string 1: ");
	fgets(str1,sizeof(str1),stdin);
	int i=0;
	while(str1[i]!='\0'){
		if(str1[i]=='\n'){
			str1[i]='\0';
		}
		i++;
	}
	printf("enter the string 2: ");
        fgets(str2,sizeof(str2),stdin);
        i=0;
        while(str2[i]!='\0'){
                if(str2[i]=='\n'){
                        str2[i]='\0';
                }
		i++;
        }
	int len1=0,len2=0;
	while(str1[len1++]!='\0');
	while(str2[len2++]!='\0');
	int falg=0;
	if(len1!=len2){
		printf("both strings are  not equal\n ");
		return 0;
	}
	i=0;
	int flag =1;
	while(str1[i]!='\0'){
		if(str1[i]!=str2[i]){
			flag =0;
			break;
		}
		i++;
	}
	if(flag){
		printf("both are same\n");
	}
	else{
		printf("both are not same\n");
	}
	return 0;
}



