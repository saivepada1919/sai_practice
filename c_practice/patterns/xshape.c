#include <stdio.h>
void xshape(){
	int n;
	printf("enter the value:");
	scanf("%d",&n);
	int i,j;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(i==j || i+j==n+1){
				printf("* ");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}
int main(){
	xshape();
	return 0;
}
