#include <stdio.h>
int main(){
	char name[]="VEPADA SAI";
	char *c=name;
	int n=sizeof(name)/sizeof(name[0]);
	for(int i=0;i<n;i++){
		printf("character: %c        address:%p\n",*(c+i),c+i);
	}
	return 0;
}
