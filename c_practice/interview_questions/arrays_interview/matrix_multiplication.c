#include <stdio.h>
void multiplication(int *arr1,int *arr2,int *mul,int n,int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			*(mul+i*m+j)=0;
			for(int k=0;k<m;k++){
				*(mul+i*m+j)+=(*(arr1+i*m+k) * *(arr2+k*m+j));
			}
		}
	}
}

int main(){
	int n,m;
	printf("enter the number of rows and columns: ");
	scanf("%d%d",&n,&m);
	int arr1[n][m];
	int arr2[n][m];
	int mul[n][m];
	printf("enter the elements in matrix1:\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("enter the elements in matrix2:\n");
        for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                        scanf("%d",&arr2[i][j]);
                }
        }
	multiplication((int *)arr1,(int *)arr2,(int *)mul,n,m);
	printf("multiplicatin  matrix:\n");
        for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                        printf("%-4d ",mul[i][j]);
                }
		printf("\n");
        }
	printf("\n");
	return 0;
}
