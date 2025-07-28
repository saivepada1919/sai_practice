#include <stdio.h>
#include <math.h>
void square(){
      float a,b=0.5;
      printf("enter the value:");
      scanf("%f",&a);
      float result=pow(a,b);
      printf("square root %.2f number:%.2f\n",a,result);
}
int main(){
	square();
	return 0;
}
