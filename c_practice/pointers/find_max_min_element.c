#include <stdio.h>
void mini_maxi();
int main(){
        int n;
        printf("enter the size of the array:");
        scanf("%d",&n);
        int a[n];
        printf("enter the elements:");
        for(int i=0;i<n;i++){
                scanf("%d",&a[i]);
        }
        printf("array of elements: ");
        for(int i=0;i<n;i++){
                printf("%d",a[i]);
        }
        printf("\n");
	int min,maxi;
        mini_maxi(a,n,&min,&maxi);
        printf("minimum element:%d\n",min);
        printf("maximum element:%d\n",maxi);
        return 0;
}
void mini_maxi(int a[],int n,int *min,int *maxi){
        *min=a[0];
        *maxi=a[0];
        for(int i=1;i<n;i++){
                if(*min>a[i]){
                        *min=a[i];
                }
                if(*maxi<a[i]){
                        *maxi=a[i];
                }
        }
}
