#include <stdio.h>
int main(){
	int n;
	printf("enter the n value : ");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements : ");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int max;
	int min;
	if(arr[0]>arr[1]){
		max = arr[0];
		min = arr[1];
	}
	else{
		max = arr[1];
		min = arr[0];
	}
	for(int i=2;i<n;i++){
		if(max < arr[i]){
			max = arr[i];
		}
		if(min > arr[i]){
			min = arr[i];
		}
	}
	printf("maximum element in array : %d\n",max);
	printf("minimum element in array : %d\n",min);
	return 0;
}

