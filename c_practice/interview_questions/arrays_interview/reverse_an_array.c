#include <stdio.h>
int main(){
	int n;
	printf("enter the n value : ");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements to an array : ");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int first = 0;
	int end = n-1;
	while(first<end){
		int temp = arr[first];
		arr[first] = arr[end];
		arr[end] = temp;
		first++;
		end--;
	}
	printf("after reverse the elements in array :  ");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}	
