#include <stdio.h>
int main(){
        int n,i,j;
        printf("enter the value to print hallow triangle:");
        scanf("%d",&n);
        for(i=n;i>=1;i--){
                for(j=1;j<=n-i;j++){
                        printf(" ");
                }
                for(j=1;j<=i;j++){
                        if(i==n  || j==1 || j==i){
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
