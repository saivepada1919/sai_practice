#include <stdio.h>
#include <string.h>
void string(char *m){
	printf("character with address :\n");
	for(int i=0;*(m+i) !='\0';i++){
		printf("%c address = %p\n",*(m+i),m+i);
	}
}
void reverse(char *s,char *e,char *k){
	while(s<e){
		char temp=*e;
		*e=*s;
		*s=temp;
		s++;
		e--;
	}
	printf("revrsed string:%s\n",k);
}
void rev(char *m,int st){
	printf("revrsed string:");
	for(int i=st-1;i>=0;i--){
		printf("%c",*(m+i));
	}
	printf("\n");
}
void each(char *x,int st){
	printf("each character:\n");
	for(int i=0;i<st;i++){
		printf("%c\n",*(x+i));
	}
}
int main(){
	int n;
	printf("enter the size of string:");
	scanf("%d",&n);
	getchar();
	char a[n];
	char *c=a;
	printf("enter the string:");
	fgets(a,n,stdin);
	a[strcspn(a,"\n")] = '\0';
	int st = strlen(a);
	char *start = a;
        char *end = a + strlen(a)-1;
	printf("original string:%s\n",c);
	string(a);
	rev(a,st);
	each(a,st);
	reverse(start,end,a);
	return 0;
}
	
