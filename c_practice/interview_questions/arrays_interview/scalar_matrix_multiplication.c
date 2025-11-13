#include <stdio.h>
int main(){
	int r,c;
	printf("enter the rows and columns : ");
	scanf("%d%d",&r,&c);
	int a[r][c],b[r][c],s[r][c];
	printf("enter the elements to matrix 1 :\n");
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(i==j){
				scanf("%d",&a[i][j]);
			}
			else{
				a[i][j] = 0;
			}
		}
	}
	printf("enter the elements to matrix 2 :\n");
        for(int i=0;i<r;i++){
                for(int j=0;j<c;j++){
                        if(i==j){
                                scanf("%d",&b[i][j]);
                        }
                        else{
                                b[i][j] = 0;
                        }
                }
        }
	printf("matrix 1 elements :\n");
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("matrix 2 elements :\n");
        for(int i=0;i<r;i++){
                for(int j=0;j<c;j++){
                        printf("%d ",b[i][j]);
                }
		printf("\n");
        }
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			s[i][j] = 0;
			if(i == j){
				s[i][j] = a[i][j] * b[i][j];
			}
		}
	}
	printf("scalar multiplication matrix  elements :\n");
        for(int i=0;i<r;i++){
                for(int j=0;j<c;j++){
                        printf("%d ",s[i][j]);
                }
                printf("\n");
        }
	return 0;

}
