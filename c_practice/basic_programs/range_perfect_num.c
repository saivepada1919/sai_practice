#include <stdio.h>
int perfect(int n){
        int sum=0;
        for(int i=1;i<n;i++){
                if(n%i==0){
                        sum+=i;
                }
        }
        return sum;
}
int main(){
        int s,e;
        printf("enter the start range number :");
        scanf("%d",&s);
        printf("enter the end range number :");
        scanf("%d",&e);
        for(int i=s;i<=e;i++){
                int res=perfect(i);
                if(i==res){
                printf("%d ",i);
                }
        }
	printf("\n");
        return 0;
}
