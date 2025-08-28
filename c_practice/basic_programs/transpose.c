#include <stdio.h>
void transpose(int *a, int r, int c)
{
	printf("after transpose:\n");
	for(int i=0;i<r;i++){
                for(int j=0;j<c;j++){
			printf("%d ",*(a+j*c+i));
		}
		printf("\n");
	}
}
void diagonalSum(int *a, int r, int c){
	int sum=0;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(i==j){
				sum+=*(a+i*c+j);
			}
		}
	}
	printf("sum of diagonal array: %d\n",sum);
}
void minElement(int *a, int r, int c){
	int min=*(a+0*c+0);
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(min>*(a+i*c+j)){
				min=*(a+i*c+j);
			}
		}
	}
	printf("min value:%d\n",min);
}


int main()
{
	int r,c;
	printf("enter the rows and columns:");
	scanf("%d%d",&r,&c);
	int a[r][c];
	printf("enter the elements:\n");
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("array elemnts before transpose:\n");
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	void (*p1)(int*,int,int)= transpose;
	void (*p2)(int*,int,int)= diagonalSum;
	void (*p3)(int*,int,int)= minElement;
	p1((int*)a,r,c);
	p2((int*)a,r,c);
	p3((int*)a,r,c);
	return 0;
}


