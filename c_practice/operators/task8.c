 #include <stdio.h>
int main(){
	int x;
	printf("enter the value : ");
	scanf("%d",&x);
	int result= x & (x-1);
        printf("result= %d\n",result);
        return 0;
}	
