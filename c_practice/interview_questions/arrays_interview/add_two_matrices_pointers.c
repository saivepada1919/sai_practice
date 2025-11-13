#include <stdio.h>
int main(){
	int r,c;
	printf("enter no of rows and columns:");
	scanf("%d%d",&r,&c);
	int a[r][c];
	int b[r][c];
	int sum[r][c];
	printf("enter elements of matrix1:\n");
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter elements of matrix2:\n");
        for(int i=0;i<r;i++){
                for(int j=0;j<c;j++){
                        scanf("%d",&b[i][j]);
                }
        }
        int *f=&a[0][0];
	int *s=&b[0][0];
	int *add=&sum[0][0];
        for(int i=0;i<r*c;i++){
		*(add+i)=*(f+i)+*(s+i);
        }
	printf("elments in sum array: \n");
	for(int i=0;i<r*c;i++){
               printf("%d ",*(add+i));
        }
	printf("\n");
	return 0;
}



