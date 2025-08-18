#include <stdio.h>
int reverse(int arr[],int n){
	int l=0,r=n-1;
		while(l<r){
			int temp=arr[l];
			arr[l]=arr[r];
			arr[r]=temp;
			l++;
			r--;
		}
	return 0;

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
	reverse(arr,n);
	printf("Reversed array: ");
	for(int i=0;i<n;i++){
                printf("%d ",arr[i]);
        }
	printf("\n");
	return 0;
}
