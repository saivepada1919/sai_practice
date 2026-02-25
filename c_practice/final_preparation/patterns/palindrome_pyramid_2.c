#include <stdio.h>
int main(){
	int n;
	printf("enter the n value : ");
	scanf("%d",&n);
	for(int i = 1;i<=n;i++){
		int k = i;
		for(int j =1;j<=2*i-1;j++){
			if(j<i){
				printf("%d ",k--);
			}
			else{
				printf("%d ",k++);
			}
		}
		printf("\n");
	}
}
