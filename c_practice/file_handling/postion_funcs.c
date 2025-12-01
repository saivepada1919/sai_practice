#include <stdio.h>
int main(){
	FILE *fp;
	fp = fopen("example.txt","r");
	char ch;

	if(fp == NULL){
		printf("Error to Open\n");
		return 1;
	}

	for(int i=0;i<5;i++){
		ch = fgetc(fp);
		printf("%c",ch);
	}
	printf("\n");

	printf("Current position: %ld\n",ftell(fp));
	
	rewind(fp);

	while((ch = fgetc(fp)) != EOF){
		printf("%c",ch);
	}
	printf("\n");
	fclose(fp);
	return 0;
}
