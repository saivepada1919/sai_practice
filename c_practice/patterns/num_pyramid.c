#include <stdio.h>
int main(){
        int x;
        printf("enter the value:");
        scanf("%d",&x);
	int n=2*x-1;
        for(int i=0;i<n;i++){
                for (int j=0;j<n-i-1;j++){
                        printf(" ");
                }
                for (int j=1;j<=2*i+1;j++){
			int left=j;
			int right=2*i-j;
			int bottom =x-i-1;
                        int min=left;
			if(min>right){
				min=right;
			}
			if(min>bottom){
				min=bottom;
			}
			int res=x-min;
			printf("%d",res);
                }
                printf("\n");
        }
        return 0;
}
