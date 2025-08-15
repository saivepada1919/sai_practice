#include <stdio.h>
int main(){
        int n;
        printf("enter the value:");
        scanf("%d",&n);
        int i,j;
        for(i=1;i<=n;i++){
                for(j=1;j<=n;j++){
                        if(i==(n/2)+1||j==n/2+1 ||i==j ||i+j==n+1){
                                printf("*");
                        }
                        else{
                                printf(" ");
                        }
                }
                printf("\n");
        }
        return 0;
}
