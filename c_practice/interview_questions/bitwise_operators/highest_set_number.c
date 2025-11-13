#include <stdio.h>
int main(){
	int n;
	printf("enter the n value: ");
	scanf("%d",&n);
	int size = sizeof(int)*8;
	for(int i=size-1;i>=0;i--){
		int s=n>>i&1;
		if(s==1){
			printf("the highest set bit postion is : %d\n",i);
			break;
		}
	}
	return 0;
}
