#include <stdio.h>
int main(){
	int n;
	printf("enter the n value  : ");
	scanf("%d",&n);
	int arr1[n];
	int arr2[n];
	printf("enter elemnts in array:");
	for(int i=0;i<n;i++){
		arr2[i]=0;
		scanf("%d",&arr1[i]);
	}
	for(int i=0;i<n;i++){
		if(arr2[i] == 1){
			continue;
		}
		int count =1;
		for(int j=i+1;j<n;j++){
			if(arr1[i]==arr1[j]){
				count++;
				arr2[j] =1;
			}
		}
		if(count==1){
			printf("%d times : %d\n",arr1[i],count);
		}
	}
	return 0;
}
		
