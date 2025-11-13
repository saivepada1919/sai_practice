#include <stdio.h>
#include <string.h>
int main(){
	char str[100];
	char sub[10];
	printf("enter the string : ");
	fgets(str,100,stdin);
	str[strcspn(str,"\n")] = '\0';
	printf("enter the sub string : ");
	fgets(sub,10,stdin);
	sub[strcspn(sub,"\n")] = '\0';
	int l1 = strlen(str);
	int l2 = strlen(sub);
	int found  = 0;
	for(int i=0;i<l1;i++){
		int count = 0;
		int pre = 0;
		for(int j=i;j<i+l2;j++){
			if(str[j]  == sub[count]){
				pre++;
			}
			count++;
		}
		if(pre == l2){
			found =1;
		}
	}
	if(found){
		printf("sub string is found \n");
	}
	else{
		printf("sub string is not found \n");
	}
	return 0;
}

