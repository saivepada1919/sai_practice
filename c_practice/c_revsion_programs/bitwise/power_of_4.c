#include <stdio.h>
int main(){
	int n;
	printf("enter the n value: ");
	scanf("%d",&n);
	int count=0;
	if((n & (n-1)) == 0){
		while((n&1) == 0 ){
			count++;
			n = n>>1;
		}
		if(count % 2 ==0){
			printf("power of 4\n");
		}
		else{
			printf("not power of 4\n");
		}
	}
	else{
		printf("not power of 4\n");
	}
}
