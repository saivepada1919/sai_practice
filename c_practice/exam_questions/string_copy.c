#include <stdio.h>
int main(){
	int i;
	char str1[20]="hello";
	char str2[20];
	for(i=0;str1[i]!='\0';i++){
		str2[i]=str1[i];
	}
	str2[i]='\0';
	printf("copied string: %s\n",str2);
	return 0;
}
