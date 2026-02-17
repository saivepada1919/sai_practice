#include <stdio.h>
int main(){
	int n;
	printf("enter the n value: ");
	scanf("%d",&n);
	int size = sizeof(int)*8;
	for(int i = size-1;i>=0;i--){
		if(n>>i & 1){
			printf("highest set bit : %d\n",i);
			break;
		}
	}

}



