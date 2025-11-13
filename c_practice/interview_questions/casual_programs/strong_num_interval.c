#include <stdio.h>
int fact(int a){
	if(a == 1 || a == 0){
		return 1;
	}
	else{
		return a*fact(a-1);
	}
}
void strong(int n){
	int temp = n;
	int res = 0;
	while(temp!=0){
		int rem = temp % 10;
		res += fact(rem);
		temp/=10;
	}
	if(res == n){
		printf("%d ",n);
	}
}



int main(){
	int s,e;
	printf("enter the startig value : ");
	scanf("%d",&s);
	printf("enter the ending value  : ");
	scanf("%d",&e);
	for(int i=s;i<=e;i++){
		strong(i);
	}
	printf("\n");
	return 0;
}
