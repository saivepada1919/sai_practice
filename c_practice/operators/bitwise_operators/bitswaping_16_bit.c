#include <stdio.h>
int main(){
	unsigned short n;
	printf("enter the number:");
	scanf("%hu",&n);
	printf("before swapping: %hu\n",n);
	int p1,p2,p3,p4;
	printf("enter the positions:");
	scanf("%d%d%d%d",&p1,&p2,&p3,&p4);
	/*int b1=(n>>p1)&1;
	int b2=(n>>p2)&1;
	int b3=(n>>p3)&1;
	int b4=(n>>p4)&1;
	if(b1 != b3){
		n ^=(1<<p1);
		n ^=(1<<p3);
	}
	if(b2 != b4){
		n ^= (1<<p2);
		n ^= (1<<p4);
	}
	*/
	int k=n&(1<<p1);
	int m=n&(1<<p2);
	int l=n&(1<<p3);
	int o=n&(1<<p4);
	int s1=p3-p1;
	int s2=p4-p1;
	n=(((n&(1<<p1))&(1<<p2)&(1<<p3)&(1<<p4))|(k<<s1)|(m<<s2)|(l>>s1)|(m>>s2));
	printf("after swapping: %hu\n",n);
	return 0;
}

