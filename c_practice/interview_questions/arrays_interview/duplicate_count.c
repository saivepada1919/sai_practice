#include <stdio.h>
int main(){
        int n;
        printf("enter the n value : ");
        scanf("%d",&n);
        int arr1[n],arr2[n];
	int duplicate_count=0;
        printf("enter the elements to an array : ");
        for(int i=0;i<n;i++){
                scanf("%d",&arr1[i]);
                arr2[i]=0;
        }
        for(int i=0;i<n;i++){
                if(arr2[i]==1){
                        continue;
                }
                int count = 1;
                for(int j=i+1;j<n;j++){
                        if(arr1[i]==arr1[j]){
                                count++;
                                arr2[j]=1;
                        }
                }
                if(count > 1){
			duplicate_count++;
                }
        }
        printf("duplicate count in array : %d\n",duplicate_count);
        return 0;
}

