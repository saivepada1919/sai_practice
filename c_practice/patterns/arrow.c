#include <stdio.h>
int main(){
	int n,spaces;
	printf("enter the vlaue: ");
	scanf("%d%d",&n,&spaces);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=spaces+i;j++){
			printf(" ");
		}
		printf("*");
		printf("\n");
	}
	for(int i=1;i<=(spaces/2)+n;i++){
		printf("* ");
	}
	printf("\n");
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=(spaces+n+1)-i;j++){
			printf(" ");
		}
	printf("*");
	printf("\n");
	}
	return 0;
}
