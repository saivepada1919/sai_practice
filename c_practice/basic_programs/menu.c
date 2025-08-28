#include <stdio.h>
void printArray(int *a,int r,int c){
	printf("array elements:\n");
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			printf("%-4d",*(a+i*c+j));
		}
		printf("\n");
	}
}
void sum(int *a,int r,int c){
	int res=0;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			res+=*(a+i*c+j);
		}
	}
	printf("sum of 2D array elements: %d\n",res);
}
void maxi(int *a,int r,int c){
	int max=*(a+0*c+0);
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(max < *(a+i*c+j)){
				max=*(a+i*c+j);
			}
		}
	}
	printf("maximum elemnent: %d\n",max);
}
int main(){
	int r;
	int c;
	printf("enter the rows and columns:");
	scanf("%d%d",&r,&c);
	int a[r][c];
	printf("enter the elements in 2d array:");
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	void (*p1)(int *,int,int) = printArray;
	p1((int *)a,r,c);
	void (*p2)(int *,int,int) = sum;
	p2((int *)a,r,c);
	void (*p3)(int *,int,int) = maxi;
	p3((int *)a,r,c);
	return 0;
}

