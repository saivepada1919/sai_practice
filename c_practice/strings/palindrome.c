#include <stdio.h>
#include <string.h>
int main(){
	int n,flag=1;
	printf("enter the size of an array:");
	scanf("%d",&n);
	getchar();
	char c[n];
	fgets(c,n,stdin);
	c[strcspn(c,"\n")]='\0';
	int s=0;
	int e=strlen(c)-1;
	while(s<e){
		if(c[s]!=c[e]){
			flag=0;
			break;
		}
		s++;
		e--;
	}
	if(flag){
		printf("palindrome");
	}
	else{
		printf("not palindrome");
	}
}



