#include <stdio.h>
int main(){
	FILE *fp;
	fp = fopen("example.txt","r");
	char line[100];
	
	if(fp == NULL){
		printf("file does not exsit\n");
		return 1;
	}

	while(fgets(line,sizeof(line),fp)){
		printf("%s",line);
	}
	fclose(fp);
	return 0;
}
