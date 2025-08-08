#include <stdio.h>
float interest(float p,float t,float r){
	return (p*t*r)/100;
}
int main(){
	float p,t,r;
	printf("enter the principle, time and rate:");
	if(scanf("%f%f%f",&p,&t,&r) !=3){
		printf("invalid inputs");
		return 1;
	}
	float si=interest(p,t,r);
	printf("simple interest =%.2f\n",si);
	return 0;
}


