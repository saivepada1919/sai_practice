#include <stdio.h>
int rotate(int n,int pos,char shift){
	int size = sizeof(int)*8;
	if(shift == 'l'){
		n=(n<<pos) | (n>>(size-pos));
	}
	else{
		n=(n>>pos) | (n<<(size-pos));
	}
	return n;
}
int main(){
	int n;
	printf("enter the n value:");
	scanf("%d",&n);
	int pos;
	char shift;
	printf("enter the postion : ");
	scanf("%d",&pos);
	getchar();
	printf("enter the shift(L/R): ");
	scanf("%c",&shift);
	printf("before rotate the given number: %d\n",n);
	int res=rotate(n,pos,shift);
	printf("after rotate the given number: %d\n",res);
	return 0;
}

