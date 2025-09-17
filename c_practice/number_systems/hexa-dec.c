#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
        char hexa[32];
        printf("eneter the hexa value:");
        scanf("%s",hexa);
        int dec=0;
	int base=1;
	int len=strlen(hexa);
	for(int i=0;i<len;i++){
		char ch=toupper(hexa[i]);
		int value;
		if(ch>='0' && ch<='9'){
		
                      value=ch-'0';
                }
                else{
                        value=ch+10-'A';
                }
		dec+=value*base;
		base*=16;
        }
        printf("dec number:%d\n",dec);
        return 0;
}
