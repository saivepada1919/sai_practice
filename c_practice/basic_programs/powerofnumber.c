#include <stdio.h>
#include <math.h>
void power(float n,float m){
        float result=pow(n,m);
	printf("power of given number:%.2f\n",result);
}
int main(){
	float base,power_value;
	printf("enter the base value and power value:");
	scanf("%f%f",&base,&power_value);
	if (base>0){
		power(base,power_value);
	}
	else{
		printf("invalid input\n");
	}
	return 0;
}

	
