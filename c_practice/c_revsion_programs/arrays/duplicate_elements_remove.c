#include <stdio.h>
int main(){
	int n;
	printf("enter the n value : ");
	scanf("%d",&n);
	int arr[10];
	printf("enter the array: ");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i= 0 ;i<n;i++){
		for(int j =i+1;j<n;j++){
			if(arr[i] == arr[j]){
				for(int k = j;k<n;k++){
					arr[k] = arr[k+1];
				}
				n--;
				j--;
			}
		}
	}
	printf("after removing array elements : ");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}

