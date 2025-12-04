#include <stdio.h>
#include <string.h>
void ncompare(char *str1,char *str2,int n){
	int i = 0;
	while(i != n){
		if(*(str1+i) != *(str2+i)){
			printf("not equal\n");
			return;
		}
		i++;
	}
	printf("equal\n");
}

int main(){
	char str1[100];
	char str2[100];
	printf("enter the string : ");
	fgets(str1,100,stdin);
	printf("enter string 2 : ");
	fgets(str2,100,stdin);
	int n;
	printf("enter n value : ");
	scanf("%d",&n);
	int l1 = strlen(str1);
	int l2 = strlen(str2);
	if(n > l1 || n > l2){
		printf("cannot compare\n");
		return 0;
	}
	ncompare(str1,str2,n);
	return 0;
}
