#include <stdio.h>
#include <string.h>
int main(){
	char  str[] = "sai is good boy";
	char sub[] = "good0";
	int l1 = strlen(str);
	int l2 = strlen(sub);
	int i = 0;
	int found = 0;
	while(str[i] != '\0'){
		int j = 0;
		while(str[i+j] == sub[j] && sub[j] != '\0'){
			j++;
		}
		if(l2 == j){
			found =1;
			break;
		}
		i++;
	}
	if(found){
		printf("found\n");
	}
	else{
		printf("not found\n");
	}
	return 0;
}


