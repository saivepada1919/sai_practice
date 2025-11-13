#include <stdio.h>
int main(){
	int n;
	printf("enter the n value : ");
	scanf("%d",&n);
	int arr[n];
	printf("enter the the values : ");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int res = 0;
	for(int i=0;i<n;i++){
		int left = arr[i];
		int right = arr[i];
		for(int j=0;j<i;j++){
			if(left < arr[j]){
				left = arr[j];
			}
		}
		for(int j=i+1;j<n;j++){
                        if(right < arr[j]){
                                right = arr[j];
                        }
                }
		if(left > right){
			res+=right - arr[i];
		}
		else{
			res+=left - arr[i];
		}
	}
	printf("water stroage cubes : %d\n",res);
	return 0;
}






