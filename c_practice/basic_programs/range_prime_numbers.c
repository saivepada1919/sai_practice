#include <stdio.h>
int prime(int n){
	int count=0;
	for(int i=2;i<=n/2;i++){
			if(n%i==0){
				count++;
			}
	}
	return count;
}
int main(){
	int start,end;
	printf("enter the range of values:");
	scanf("%d%d",&start,&end);
	for(int i=start;i<=end;i++){
		if(i>1 && prime(i)==0){
			printf("%d ",i);
		}
	}
	printf("\n");
}


	
