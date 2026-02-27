#include <stdio.h>
#include <string.h>
void concat(char *dest,char *src){
	int l1 = strlen(dest);
	int i =0;
	while(src[i] !='\0'){
		dest[l1+i] = src[i];
		i++;
	}
	dest[l1+i] = '\0';
}
int main(){
	char dest[100] = "hello";
	char src[] = " world";
	if(strlen(src)+strlen(dest) > sizeof(dest)){
		printf("Unable to concat\n");
		return 0;
	}
	concat(dest,src);
	printf("after conacatination : %s",dest);
	return 0;
}
