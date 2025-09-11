#include <stdio.h>
struct emp{
	int id;
	char name[100];
	float salary;
};
int main(){
	int n;
	printf("enter no of employees:");
	scanf("%d",&n);
	struct emp e[n];
	for(int i=0;i<n;i++){
		printf("employee %d :",i+1);
		scanf("%d   %s   %f",&e[i].id,e[i].name,&e[i].salary);
	}
	int max=e[0].salary;
	int f;
	for(int i=0;i<n;i++){
		if(max<e[i].salary){
			max=e[i].salary;
		        f=i;
		}
	}
	printf("employee[%d]:\n name: %s\n id: %d\n salary: %.2f\n",f,e[f].name,e[f].id,e[f].salary);
	return 0;
}
		

