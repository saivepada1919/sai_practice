#include <stdio.h>
int main(){
	int n;
	printf("enter the n value:");
	scanf("%d",&n);
	int count=0,k=0;
	int m=n;
	while(m>0){
		if(m&1){
			k++;
		}
		k=k>>1;
	}
	while(n>0){
		if(n&1){
			count++;
		}
		n=n>>1;
	}
	if(k==1 && count==1){
		printf("%d  is power of 4\n",m);
	}
	else{
		printf("%d is not power of 4\n",m);
	}
	return 0;
}
