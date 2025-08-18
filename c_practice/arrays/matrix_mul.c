#include <stdio.h>
int main(){
        int x,y,z;
        printf("enter the no.of 2D arrays, rows and columns: ");
        scanf("%d%d%d",&x,&y,&z);
        int a[x][y][z];
        int size1=y*z;
	int b[y][z];
        for(int i=0;i<x;i++){
		printf("enter no.of elements to %d 2D : %d\n",i+1,size1);
                for(int j=0;j<y;j++){
			for(int k=0;k<z;k++){
				scanf("%d",&a[i][j][k]);
			}
                }
	}
        for(int i=0;i<x;i++){
		printf("%dth 2D array:\n",i+1);
		for(int j=0;j<y;j++){
                      for(int k=0;k<z;k++){     
			      printf("%d ",a[i][j][k]);
                        }
		      printf("\n");
                }
        }
	int c[y][z];
	for(int i=0;i<y;i++){
		for(int j=0;j<z;j++){
			int sum = 0;  // reset here
			for(int k=0;k<y;k++){
				sum += c[i][k] * c[k][j]; 
			}
			b[i][j] = sum;
		}
	}
	for(int j=0;j<y;j++){
                  for(int k=0;k<z;k++){
                                printf("%d ",b[j][k]);
                        }
			printf("\n");
                }
	return 0;
}
