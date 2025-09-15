#include <stdio.h>
#include <string.h>
int main(){
	int n;
	printf("enter the size  of array:");
	scanf("%d",&n);
	getchar();
	char c[n];
	printf("enter the string:");
	fgets(c,n,stdin);
	c[strcspn(c,"\n")]='\0';
	int i=0;
	int count=0;
	while(c[i]!='\0'){
		if(c[i]=='a'|| c[i]=='e' ||c[i]=='i'||c[i]=='o'||c[i]=='u'||c[i]=='A'|| c[i]=='B' ||c[i]=='C'||c[i]=='O'||c[i]=='U'){
			printf("%c ",c[i]);
			count++;
		}
		i++;
	}
	printf("\n");
	printf("no of vaowels in given string:%d\n",count);
	return 0;
}
