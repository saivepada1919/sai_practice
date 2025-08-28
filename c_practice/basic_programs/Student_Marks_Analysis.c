#include <stdio.h>
void total(int a[][3],int b[],float avg[],int n,int subs){
	for(int i=0;i<n;i++){
		int sum=0;
		for(int j=0;j<subs;j++){
			sum+=a[i][j];
		}
		b[i]=sum;
		avg[i]=(float)sum/subs;
	}
}
int main(){
	int n;
	printf("enter the no.of students:");
	scanf("%d",&n);
	int subs=3;
	int a[n][subs];
	int b[n];
	float avg[n];
	for(int i=0;i<n;i++){
		printf("enter marks of sudent:%d\n",i+1);
		for(int j=0;j<subs;j++){
			scanf("%d",&a[i][j]);
		}
	}
	total(a,b,avg,n,subs);

	for(int i=0;i<n;i++){
		printf("student %d -> Total = %d, Average = %.2f, Result = ",i+1,b[i],avg[i]);
		if(avg[i]>=35){
			printf("Pass");
		}
		else{
			printf("else");
		}
		printf("\n");
	}
	int temp=0;
	for(int i=1;i<n;i++){
		if(b[temp]<b[i]){
			temp=i;
		}
	}
	printf("Topper: Student %d with %d marks", temp+1, b[temp]);
	printf("\n");
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=b[i];
	}
        float class_avg=(float)sum/n;
	printf("Class avg: %.2f\n",class_avg);
}

	


