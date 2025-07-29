#include <stdio.h>
int hcf(int a, int b){
	int temp;
	while(b!=0){
		temp=b;
		b=a%b;
		a=temp;
	}
	return a;
}
int lcm(int a,int b,int hcf_res){
	return a*b/hcf_res;
}
int main(){
	int a,b;
	printf("enter the values:");
	scanf("%d%d",&a,&b);
	int hcf_res=hcf(a,b);
	int lcm_res=lcm(a,b,hcf_res);
	printf("hcf of %d and %d = %d\n",a,b,hcf_res);
        printf("lcm of %d and %d = %d\n",a,b,lcm_res);
        return 0;

}

