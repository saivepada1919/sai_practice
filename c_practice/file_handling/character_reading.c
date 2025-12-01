#include <stdio.h>
int main(){
	FILE *fp;
	fp=fopen("data.txt","r");
	if(fp==NULL){
		printf("Error to open\n");
		return 1;
	}
	char ch=fgetc(fp);
	printf("character :%c\n",ch);
	fclose(fp);
	return 0;
}
