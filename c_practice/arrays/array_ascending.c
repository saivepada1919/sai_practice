#include <stdio.h>
void ascending(int arr[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}
int main(){
        int n;
        printf("enter the size of an array: ");
        scanf("%d",&n);
        int arr[n];
        printf("enter the elements:");
        for(int i=0;i<n;i++){
                scanf("%d",&arr[i]);
        }
        printf("orginal array:");
        for(int i=0;i<n;i++){
                printf("%d ",arr[i]);
        }
        printf("\n");
        ascending(arr,n);
        printf("sorted or ascending array: ");
        for(int i=0;i<n;i++){
                printf("%d ",arr[i]);
        }
        printf("\n");
        return 0;
}	
