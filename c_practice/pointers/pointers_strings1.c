#include <stdio.h>
int main(){
	char a[]="hello";
	char *p=a;
	for(int i=0;*(p+i)!='\0';i++){
		printf("character : %c       address: %p\n",*(p+i),p+i);
	}
	return 0;
}
