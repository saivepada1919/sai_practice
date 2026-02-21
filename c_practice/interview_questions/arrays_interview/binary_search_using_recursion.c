#include <stdio.h>
int binary_search(int arr[],int n,int r,int l){
	if(l > r){
		return 0;
	}
	int mid = (l+r)/2;
	if(arr[mid] == n){
		return 1;
	}
	if(n < arr[mid]){
		return binary_search(arr,n,mid-1,l);
	}
	else{
		return binary_search(arr,n,mid+1,r);
	}
}
int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int l = 0;
	int r = sizeof(arr)/sizeof(arr[0]) - 1;
	int n = 88;
	int res = binary_search(arr,n,r,l);
	if(res){
		printf("found\n");
	}
	else{
		printf("Not found\n");
	}
}
