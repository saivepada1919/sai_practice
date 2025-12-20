#include <stdio.h>
int main(){
        int n,pos;
        printf("enter the n value : ");
        scanf("%d",&n);
	int size = sizeof(int)*8;
	for(int i = size-1;i>=0;i--){
		if((n>>i)&1){
		printf("Highest set bit position : %d\n",i);
		break;
		}
	}
        return 0;
}

