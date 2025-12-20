#include <stdio.h>
int main(){
	int n,pos;
	printf("enter the n value : ");
	scanf("%d",&n);
	printf("enter the postion to you want : ");
	scanf("%d",&pos);
	int size = sizeof(int)*8;
	if(pos <0 ||  pos > (size-1)){
		printf("INVALID POSTION\n");
		return 0;
	}
	if((n>>pos) & 1){
		printf("pos %d bit is 1 \n",pos);
	}
	else{
		printf("pos %d bit is 0 \n",pos);
	}
	return 0;
}
	
