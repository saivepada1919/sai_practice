#include <stdio.h>
#include <string.h>
void reverse(char *s,char *e){
	if(s >= e){
		return;
	}
		char temp = *s;
		*s = *e;
		*e = temp;
		reverse(s+1,e-1);
}

	
int main(){
	char str[] = "sai";
	reverse(str,str+strlen(str)-1);
	printf("%s\n",str);

}

