#include <stdio.h>
void right_rotate(int arr[],int p,int n);
int main(){
	int n;
	printf("enter the n value : ");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements : ");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("before rotate elements : ");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	int p;
	printf("\nenter the how many positions to rotate : ");
	scanf("%d",&p);
	right_rotate(arr,p,n);
	printf("after rotate elements : ");
        for(int i=0;i<n;i++){
                printf("%d ",arr[i]);
        }
	printf("\n");
	return 0;
}
void right_rotate(int arr[],int p,int n){
	for(int i=0;i<p;i++){
		int temp = arr[n-1];
		for(int j=n-1;j>0;j--){
			arr[j] = arr[j-1];
		}
		arr[0] = temp;
	}
}
