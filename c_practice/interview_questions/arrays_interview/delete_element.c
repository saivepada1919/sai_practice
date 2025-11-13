#include <stdio.h>
int main(){
	int n;
	printf("enter the n value : ");	
	scanf("%d",&n);
	int arr[n];
	int value;
	printf("enter the elements in array : ");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("before delete element : ");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	int found=0;
	printf("enter the value to delete : ");
	scanf("%d",&value);
	for(int i=0;i<n;i++){
		if(arr[i] == value){
			found=1;
			for(int j=i;j<n;j++){
				arr[j] = arr[j+1];
			}
			n--;
			i--;
		}
	}
	if(found){
		for(int i=0;i<n;i++){
			printf("%d ",arr[i]);
		}
	}
	else{
		printf("element is not found\n");
	}
	printf("\n");
	return 0;
}

