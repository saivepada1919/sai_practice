#include <stdio.h>
void merged(int *arr1,int *arr2,int *res,int n1,int n2){
	for(int i=0;i<n1;i++){
		res[i] = arr1[i];
	}
	for(int i=0;i<n2;i++){
		res[n1+i] = arr2[i];
	}
}
void sorting(int *res,int n1,int n2){
	for(int i=0;i<(n1+n2)-1;i++){
		for(int j = 0;j<(n1+n2)-i-1;j++){
			if(res[j] > res[j+1]){
				int temp = res[j];
				res[j] = res[j+1];
				res[j+1] = temp;
			}
		}
	}
}
int median(int *res,int n1,int n2){
	int k = n1+n2;
	int m = k/2;
	return m;
}


		

int main(){
	int n1,n2;
	printf("enter the n1 and n2 values : ");
	scanf("%d%d",&n1,&n2);
	int arr1[n1],arr2[n2];
	int res[n1+n2];
	printf("enter the first array values : ");
	for(int i = 0;i<n1;i++){
		scanf("%d",&arr1[i]);
	}
	printf("enter the second array values : ");
	for(int i = 0;i<n2;i++){
		scanf("%d",&arr2[i]);
	}
	merged(arr1,arr2,res,n1,n2);
	printf("after merged two arrays : ");
        for(int i = 0;i<n1+n2;i++){
                printf("%d ",res[i]);
        }
	printf("\n");
	sorting(res,n1,n2);
	printf("after merged sorted array : ");
        for(int i = 0;i<n1+n2;i++){
                printf("%d ",res[i]);
        }
	printf("\n");
	int m = median(res,n1,n2);
	if((n1+n2)%2!=0){
		printf("median of sorted array : %d\n",res[m]);
	}
	else{
		float med = (float)(res[m]+res[m-1])/2;
		printf("medain of sorted array : %.2f\n",med);
	}
	return 0;
}

