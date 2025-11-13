#include <stdio.h>
int main(){
	int n;
	printf("enter the n value : ");
	scanf("%d",&n);
	int size = sizeof(int)*8;
	for(int i=0;i<size;i++){
		int s = (n>>i) & 1;
		if(s==1){
			printf("the lowest set bit position : %d\n",i);
			break;
		}
	}
	return 0;
}

