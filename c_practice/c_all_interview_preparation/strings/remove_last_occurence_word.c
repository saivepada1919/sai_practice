#include <stdio.h>
#include <string.h>
int main(){
	char str[100];
	printf("enter the string : ");
	fgets(str,100,stdin);
	str[strcspn(str,"\n")] = '\0';
	char sub[20];
	fgets(sub,20,stdin);
	sub[strcspn(sub,"\n")] = '\0';
	int l1 = strlen(str);
	int l2 = strlen(sub);
	int index = -1;
	for(int i = l1-1;i>=0;i--){
		int found = 1;
		for(int j = 0 ;j<l2;j++){
			if(str[i+j] != sub[j]){
				found = 0;	
				break;
			}
		}
		if(found){
			index = i;
			break;
		}
	}
	if(index==-1){
		printf("not found\n");
		return 0;
	}
	int i;
	for(i = index;i<l1-l2;i++){
		str[i] = str[i+l2+1];
	}
	str[i] = '\0';
	printf("%s\n",str);
}

