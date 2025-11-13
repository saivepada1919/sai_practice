#include <stdio.h>
int main(){
	int n;
	printf("enter the n value : ");
	scanf("%d",&n);
	int arr1[n];
	int arr2[n];
	printf("enter the elements in array : ");
	for(int i=0;i<n;i++){
		scanf("%d",&arr1[i]);
	}
	printf("1st array elements : ");
	for(int i=0;i<n;i++){
		arr2[i] = arr1[i];
		printf("%d ",arr1[i]);
	}
	printf("\n");
	printf("2nd array elements : ");
       	for(int i=0;i<n;i++){
		printf("%d ",arr2[i]);
	}
	printf("\n");
	return 0;
}


