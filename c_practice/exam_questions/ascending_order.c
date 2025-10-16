#include <stdio.h>
int main(){
	int arr[5];
	printf("enter elements to array:");
	for(int i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	printf("before sorting elements in array:");
        for(int i=0;i<5;i++){
                printf("%d ",arr[i]);
        }
	printf("\n");
	for(int i=0;i<5-1;i++){
		for(int j=0;j<5-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("elements in ascending order : ");
	for(int i=0;i<5;i++){
                printf("%d ",arr[i]);
        }
	printf("\n");
	return 0;
}
