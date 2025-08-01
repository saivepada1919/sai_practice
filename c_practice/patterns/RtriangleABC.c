#include <stdio.h>
int main(){
        int n;
        printf("enter the number:");
        scanf("%d",&n);
        if (n>0){
                for(int i=1;i<=n;i++){
			char ch ='A';
                       for(int j=1;j<=n-i;j++){
                                printf(" ");
                        }
		       for(int k=1;k<=i;k++){
			       printf("%c",ch);
			       ch++;
		       }
                        printf("\n");
                }
        }
                else{
                        printf("invalid input\n");
                }
        return 0;
}
