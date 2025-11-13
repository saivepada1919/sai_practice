#include <stdio.h>
int natural(int i,int n){
	if(i>n){
		return 0;
	}
	printf("%d ",i);
	return natural(i+1,n);
}
int main(){
	int n;
	printf("enter the  value : ");
	scanf("%d",&n);
	natural(1,n);
	
	printf("\n");
	return 0;
}
