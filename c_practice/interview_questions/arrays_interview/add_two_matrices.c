#include <stdio.h>
int main(){
	int r,c;
	printf("enter the rows and columns :\n");
	scanf("%d%d",&r,&c);
	int a[r][c];
	int b[r][c];
	int s[r][c];
	printf("enter the first matrix values :\n");
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the second matrix values :\n");
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			scanf("%d",&b[i][j]);
		}
	}
	printf("after add fisrt matrix and second matrix values the resultant matrix : \n");
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			s[i][j] = a[i][j] + b[i][j];
			printf("%-4d ",s[i][j]);
		}
		printf("\n");
	}
}



