#include <stdio.h>
int second_largest(int *arr,int n){
	int first=0,second=0;
	if(arr[0]>arr[1]){
		first = arr[0];
		second = arr[1];
	}
	else{
		first = arr[1];
		second = arr[0];
	}
	for(int i=2;i<n;i++){
		if(arr[i]>first){
			second = first;
			first = arr[i];
		}
		else if(second < arr[i] && arr[i]!=first){
			second = arr[i];
		}
	}
	return second;
}

int second_lowest(int *arr,int n){
	int first=0,second=0;
        if(arr[0]>arr[1]){
                first = arr[1];
                second = arr[0];
        }
        else{
                first = arr[0];
                second = arr[1];
        }
        for(int i=2;i<n;i++){
                if(arr[i]<first){
			second = first;
                        first = arr[i];
                }
                else if(second > arr[i] && arr[i]!=first){
                        second = arr[i];
                }
        }
        return second;
}
int main(){
	int n;
	printf("enter n value: ");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements in array: ");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int low = second_lowest(arr,n);
	int high = second_largest(arr,n);
	printf("second lowest number in array: %d\n",low);
	printf("second largest number in array: %d\n",high);
	return 0;
}
