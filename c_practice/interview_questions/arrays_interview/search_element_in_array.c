#include <stdio.h>
int main(){
	int n,value;
	printf("enter the n value : ");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements to an array : ");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("enter the value to search : ");
	scanf("%d",&value);
	int found = 0,i;
	printf("%d is found at index ",value);
	for(i=0;i<n;i++){
		if(arr[i] == value){
			found = 1;
		        printf("%d ",i);
		}
	}
	printf("\n");
	if(!found){
		printf("%d is not found in array\n",value);
	}
	return 0;
}
