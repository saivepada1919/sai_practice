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
	int ele;
	printf("enter the element to delete : ");
	scanf("%d",&ele);
	for(int i= 0 ;i<n;i++){
		if(arr[i] == ele){
			for(int j = i;j<n;j++){
				arr[j] = arr[j+1];
			}
			n--;
			i--;
		}
	}
	printf("after removing array elements : ");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}

