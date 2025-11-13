#include <stdio.h>
void negative_elements(int arr[],int n){
	printf("nagitive elements in array : ");
	for(int i=0;i<n;i++){
		if(arr[i]<0){
			printf("%d ",arr[i]);
		}
	}
	printf("\n");
}
int main(){
	int n;
	printf("enter the size of an array : ");
	scanf("%d",&n);
	int arr[n];
	printf("enter elements in array : ");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	negative_elements(arr,n);
	return 0;
}
