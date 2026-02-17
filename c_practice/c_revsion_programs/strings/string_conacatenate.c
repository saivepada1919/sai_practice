#include <stdio.h>
#include <string.h>
int main(){
	char str1[100] = "sai";
	char str2[100] = " vepada";
	int size = sizeof(str1)/sizeof(str1[0]);
	int l1= strlen(str1);
	int l2 = strlen(str2);
	if(l1+l2 >= size){
		printf("unable to conacat two strings\n");
		return 0;
	}
	for(int i=0;i<l2;i++){
		str1[l1+i] = str2[i];
	}
	str1[l1+l2] = '\0';
	printf("%s\n",str1);
}

