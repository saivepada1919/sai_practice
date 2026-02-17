#include <stdio.h>
#include <string.h>
int main(){
	for(int i=0;i<strlen("hello");i++){
		printf("%.*s\n",i+1,"hello");
	}
}
