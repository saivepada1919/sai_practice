#include <stdio.h>
#include <string.h>
int main(){
	char str1[] = "sai";
	char str2[] = "vai";
	if(strlen(str1) != strlen(str2)){
		printf("not eqaul\n");
		return 0;
	}
	for(int i = 0;str1[i] != '\0';i++){
		if(str1[i] != str2[i]){
			printf("Not equal\n");
			return 0;
		}
	}
	printf("equal\n");
}
