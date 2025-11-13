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
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				for(int k=j;k<n;k++){
					arr[k]=arr[k+1];
				}
				j--;
				n--;
			}
		}
	}
	printf("after deleting duplicate elements in array : ");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}

