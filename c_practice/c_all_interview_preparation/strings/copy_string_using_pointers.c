#include <stdio.h>
#include <string.h>
void copying(char *str1,char *str2){
	int i;
	for( i = 0;str1[i] != '\0';i++){
		str2[i] = str1[i];
	}
	str2[i] = '\0';
}
	
int main(){
	char str1[100];
	char str2[100];
	printf("enter string : ");
	fgets(str1,100,stdin);
	str1[strcspn(str1,"\n")] = '\0';
	int len = strlen(str1);
	if(len > sizeof(str2)){
		printf("copying is not possible\n");
		return 0;
	}
	copying(str1,str2);
	printfc("secnod string : %s\n",str2);
	return 0;
}
