#include <stdio.h>
int rotate(int n,int pos,char shift){
	int size = sizeof(int)*8;
	if(shift == 'l'){
		n = (n<<pos) | (n>>(size-pos));
	}
	else if(shift == 'r'){
		n = (n>>pos) | (n<<(size-pos));
	}
	return n;
}
int main(){
	int n;
	printf("enter the n value : ");
	scanf("%d",&n);
	printf("before roate then value : %d\n",n);
	int pos;
	char shift;
	printf("enter the positions to shift : ");
	scanf("%d",&pos);
	printf("enter the shift 'l'-left and 'r'-right : ");
	scanf(" %c",&shift);
	n = rotate(n,pos,shift);
	printf("after rotation n value : %d\n",n);
	return 0;
}
	

