#include <stdio.h>
int main(){
        int x,y;
        printf("enter the no.of rows and columns: ");
        scanf("%d%d",&x,&y);
        int a[x][y];
	int b[x][y];
	int c[x][y];
	printf("enter no.of elements to 1st 2D : ");
	for(int j=0;j<x;j++){
		for(int k=0;k<y;k++){
			scanf("%d",&a[j][k]);
		}
        }
	printf("enter no.of elements to 2nd 2D : "); 

       	for(int j=0;j<x;j++){
                for(int k=0;k<y;k++){
                        scanf("%d",&b[j][k]);
                }
        }

	printf("1st 2D array:\n");

	for(int j=0;j<x;j++){
             for(int k=0;k<y;k++){     
		     printf("%d ",a[j][k]);
	     }
	     printf("\n");
	}

        printf("2nd 2D array:\n");

	for(int j=0;j<x;j++){
             for(int k=0;k<y;k++){
                     printf("%d ",b[j][k]);
             }
             printf("\n");
        }
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			c[i][j]=0;
		}
	}

	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			for(int k=0;k<y;k++){
				c[i][j]+= a[i][k] * b[k][j]; 
			}
		}
	}
	printf("After multiplication:\n");
	for(int j=0;j<x;j++){
                  for(int k=0;k<y;k++){
                                printf("%-4d ",c[j][k]);
                        }
			printf("\n");
                }
	return 0;
}
