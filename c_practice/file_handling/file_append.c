#include <stdio.h>
int main(){
	FILE *fp;
	fp = fopen("example.txt","a");

	if(fp == NULL){
		printf("Error to opening file\n");
		return 1;
	}
	
	fputs("This is sai!\n",fp);
	fclose(fp);
	
	printf("Appended sucessfully\n");
	return 0;
}
