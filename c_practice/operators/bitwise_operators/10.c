#include <stdio.h>
#include <math.h>
double floating(double a,double b){
}
int main(){
        double a,b,epsilon;
        printf("enter the values and epsilon :");
        if(scanf("%lf%lf%lf",&a,&b,&epsilon) !=3){
        printf("invalid inputs ,please give three floating inputs seprate by spacing\n");
        return 1;
        }
        if(epsilon <=0){
                printf("esplion value must be postive\n");
                return 1;
        }
        double diff=fabs(a-b);
        if(diff<=epsilon){
                printf("equal with in precision %.1e\n",epsilon);
        }
        else
        {
                printf("not equal with in precision %.1e\n",epsilon);
        }
        return 0;
}                                                                   
