#include <stdio.h>
int main(){
	int n;
	printf("enter the n value: ");
	scanf("%d",&n);
	int pos;
	printf("enter pos to get bit : ");
	scanf("%d",&pos);
	if((n>>pos)&1){
		printf("position %d is set bit\n",pos);
	}
	else{
		printf("position %d is not set bit\n",pos);
	}
	return 0;
}
