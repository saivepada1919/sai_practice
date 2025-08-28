#include <stdio.h>
int minvalue(int top,int left,int bottom,int right){
	int min=top;
	if(min > left){
		min=left;
	}
	if(min > bottom){
		min=bottom;
	}
	if(min > right){
		min=right;
	}
	return min;
}
int main(){
	int n;
	printf("enter the no :");
	scanf("%d",&n);
	int size=2*n-1;
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			int top = i;
		        int left = j;
			int bottom = size-i-1;
	                int right = size-j-1;
			int res = n - minvalue(top,left,bottom,right);
			printf("%d ",res);
		}
		printf("\n");
	}
	return 0;
}
