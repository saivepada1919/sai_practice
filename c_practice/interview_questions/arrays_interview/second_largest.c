#include <stdio.h>
int second_largest(int *arr,int n){
	int first =0,second= 0;
	if(arr[0]>arr[1]){
		first=arr[0];
		second=arr[1];
	}
	else{
		first=arr[1];
		second=arr[0];
	}
	for(int i=2;i<n;i++){
		if(arr[i]>first){
			second = first;
			first = arr[i];
		}
		else if(arr[i]>second && arr[i]!=first){
			second = arr[i];
		}
	}
	return second;
}


int main(){
	int n;
	printf("enter the n value: ");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements: ");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int second = second_largest(arr,n);
	printf("enter the second largest element in array: %d\n",second);
	return 0;
}


