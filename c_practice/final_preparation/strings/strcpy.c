#include <stdio.h>
#include <string.h>
void copy(char *src,char *dest){
	int i=0;
	while(src[i] != '\0'){
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}


int main(){
	char src[] = "hello";
	char dest[100];
	int l1 = strlen(src);
	if(l1 >= sizeof(dest)){
		printf("unable copy\n");
		return 0;
	}
	copy(src,dest);
	printf("dest : %s\n",dest);
	return 0;
}

