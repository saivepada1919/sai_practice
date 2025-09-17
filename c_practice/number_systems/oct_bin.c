#include <stdio.h>
int oct_dec(int oct){
	int base=1;
        int dec=0;
        while(oct>0){
                int rem=oct%10;
                dec+=rem*base;
                base*=8;
                oct/=10;
        }
        return dec;
}
void dec_bin(int oct){
        int dec=oct_dec(oct);
        int bin[32];
        int i=0;
        while(dec>0){
                int rem=dec%2;
                bin[i]=rem;
                i++;
                dec/=2;
        }
        printf("conversion of octal to binary:");
        for(int j=i-1;j>=0;j--){
                printf("%d",bin[j]);
        }
        printf("\n");
}
int main(void){
        int oct;
        printf("enter the octal number:");
        scanf("%d",&oct);
        dec_bin(oct);
        return 0;
}

