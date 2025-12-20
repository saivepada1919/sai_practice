#include <stdio.h>
int main(){
	int n;
	printf("enter the n value : ");
	scanf("%d",&n);
	int size = sizeof(int)*8;
	if((n>>size-1)&1){
		printf("Negitive Number\n");
	}
	else{
		printf("Postive NUmber\n");
	}
	return 0;
}
