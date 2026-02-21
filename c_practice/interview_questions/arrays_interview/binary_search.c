#include <stdio.h>
int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int l = 0;
	int r = sizeof(arr)/sizeof(arr[0]);
	int found = 0;
	int n = 5;
	while(l < r){
		int mid  = (l+r)/2;
		if(arr[mid]  ==  n){
			found =1;
			break;
		}
		else if(n <= arr[mid]){
				r = mid;
		}
		else{
			l = mid+1;
		}
	}
	if(found==1){
		printf("found\n");
	}
	else{
		printf("not found\n");
	}
}

		

