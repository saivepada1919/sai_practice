#include <stdio.h>
void left_rotate(int arr[],int p,int n){
	int temp;
	for(int i=0;i<p;i++){
		temp = arr[0];
		for(int j=0;j<n-1;j++){
			arr[j] = arr[j+1];
		}
		arr[n-1] = temp;
	}
}
int main(){
	int n;
	printf("enter the n value : ");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elemnts : ");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("before rotataing elements : ");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	int p;
	printf("enter the how many postions to shift  : ");
	scanf("%d",&p);
	left_rotate(arr,p,n);
	printf("after rotataing elements : ");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0 ;
}

