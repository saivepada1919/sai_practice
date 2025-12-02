#include <stdio.h>
int main(){
	int n,digit,count=0;
	printf("enter the number and digit:");
	scanf("%d%d",&n,&digit);
	while (n>0){
		int m=n%10;
		if(m==digit){
		        count++;
		}
		n=n/10;

	}
	 printf("count of the number:%d count\n",count);
	 return 0;
}
	

