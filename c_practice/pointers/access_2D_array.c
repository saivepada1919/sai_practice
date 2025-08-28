#include <stdio.h>
int main(){
	int x,y;
	printf("enter the no.of rows and columns: ");
	scanf("%d%d",&x,&y);
	printf("enter the nof elements:%d\n",x*y);
	int a[x][y];
	int (*p)[y]=a;
	printf("enter the array elements:");
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			scanf("%d",*(p+j)+i);
		}
	}
	printf("2d array elemnts:\n");
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			printf("%d ",*(*(p+j)+i));
		}
		printf("\n");
	}
	return 0;
}

