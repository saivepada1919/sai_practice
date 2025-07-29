#include <stdio.h>
int interest(int p,int t,int r){
	return (p*t*r)/100;
}
int main(){
	int p,t,r;//p=principle  t=time  r=rate
	printf("enter the principle,time and rate to calculate simple interest= ");	
	scanf("%d %d %d",&p,&t,&r);
        int simple_interest=interest(p,t,r);
	printf("simple interest = %d\n",simple_interest);
	return 0;
}
