#include <stdio.h>
int main(){
	int x,y,sum;
	printf("enter the no.of rows and columns: ");
	scanf("%d%d",&x,&y);
	int a[x][y];
	int size=x*y;
	printf("enter no.of elements to enter: %d\n",size);
	printf("enter the elements:");
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("array:\n");
	for(int i=0;i<x;i++){
                for(int j=0;j<y;j++){
                        printf("%d ",a[i][j]);
                }
		printf("\n");
        }
	printf("rows sum:");
	for(int i=0;i<x;i++){
		sum=0;
		for(int j=0;j<y;j++){
			sum=sum+a[i][j];
		}
		printf("%d ",sum);
	}
	printf("\n");
	printf("column sum: ");
	for(int j=0;j<y;j++){
		sum=0;
		for(int i=0;i<x;i++){
			sum=sum+a[i][j];
		}
		printf("%d ",sum);
	}
	printf("\n");
	return 0;
}
	
         	
	
