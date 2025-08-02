#include <stdio.h>
void div(int a){
	if(a%5==0 && a%11==0){
		printf("%d divisible by both 5 and 11\n",a);
	}
	else{
		printf("%d not divisible by 5 and 11\n",a);
	}
}
int main(){
	int a;
	printf("enter the value :");
	scanf("%d",&a);
	div(a);
	return 0;
}

