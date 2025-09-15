#include <stdio.h>
void rows_sum(int *p,int n,int m){
	printf("rows sum:");
	for(int i=0;i<n;i++){
		int sum=0;
		for(int j=0;j<m;j++){
		       sum=sum+*(p+i*m+j);
		}
		printf("%d ",sum);
	}
	printf("\n");
}
void column_sum(int *p,int n,int m){
	printf("colum sum:");
	for(int j=0;j<m;j++){
		int sum=0;
		for(int i=0;i<n;i++){
			sum+=*(p+i*m+j);
		}
		printf("%d ",sum);
	}
	printf("\n");
}
int main(){
	int n,m;
	printf("enter rows and columns:");
	scanf("%d%d",&n,&m);
	int a[n][m];
	printf("enter the no of  elements: %d\n",n*m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int *ptr=&a[0][0];
	rows_sum(ptr,n,m);
	column_sum(ptr,n,m);
	return 0;
}

