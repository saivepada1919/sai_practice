#include <stdio.h>
int main(){
	char str[100];
	char sub[10];
	printf("enter the string : ");
	fgets(str,100,stdin);
	int k=0;
	while(str[k]!='\0'){
		if(str[k]=='\n'){
			str[k] = '\0';
		}
		k++;
	}
	k = 0;
	printf("enter the sub string : ");
	fgets(sub,10,stdin);
	while(sub[k]!='\0'){
		if(sub[k]=='\n'){
			sub[k] = '\0';
		}
		k++;
	}
	int l1 = 0;
	while(str[l1] != '\0'){
		l1++;
	}
	int l2 = 0;
	while(sub[l2] != '\0'){
		l2++;
	}
	int found = 0;
	for(int i=0 ;i<l1;i++){
		int count = 0;
		int s = 0;
		for(int j=i;j<i+l2;j++){
			if(str[j] == sub[count]){
				s++;
			}
			count++;
		}
		if(l2 == s){
			found =1;
		}
	}
	if(found){
		printf("sub string is found \n");
	}
	else{
		printf("not found\n");
	}
	return 0;
}
