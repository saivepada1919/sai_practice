#include <stdio.h>
int main(){
	int n;
	printf("enter the size of array: ");
	scanf("%d",&n);
	int even=0,odd=0;
	int arr[n];
	printf("enter the elements in array: ");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		if(arr[i]%2==0){
			even++;
		}
		else{
			odd++;
		}
	}
	printf("no of even elements in array : %d\n",even);
	printf("no of odd elements in array : %d\n",odd);
	return 0;
}
