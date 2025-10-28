#include <stdio.h>
#include <string.h>
int main(){
	char str1[100];
	char str2[20];
	printf("enter string 1: ");
	fgets(str1,100,stdin);
	str1[strcspn(str1,"\n")]='\0';
	printf("enter string 2:");
	fgets(str2,20,stdin);
	str2[strcspn(str2,"\n")]='\0';
	printf("str1: %s\n",str1);
	printf("str2: %s\n",str2);
	int i=0;
	while(str1[i]!='\0'){
		i++;
	}
	int j=0;
	while(str2[j]!=0){
		j++;
	}
	int k=0;
	for( k=0;k<j;k++){
		str1[i+k]=str2[k];
	}
	str1[i+j]='\0';
	printf("after conacatnate the string 1: %s\n",str1);
	return 0;
}



