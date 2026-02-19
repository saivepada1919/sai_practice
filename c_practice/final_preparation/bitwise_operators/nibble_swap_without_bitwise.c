#include <stdio.h>
#include <stdint.h>
void swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;

}	
int main(){
	unsigned int n = 0xabcdef;
	unsigned int rev = 0;
	while(n!=0){
		int res = n % 256;
		rev = rev * 256 + res;
		n = n/256;
	}
	printf("%x ",rev);



//	int arr[4];
	/*int a,b;
	a = 0x00000012;
	b = 0xab000000;
        	
	swap(&a,&b);
	int temp = a|b;
	printf("%x%x\n %x",a,b,temp);	*/

/*	unsigned int rev = 0;
	while(n != 0){
		rev = rev << 8;
		rev = rev | (n & 0xFF);
		n = n>>8;
	}
	printf("%x \n",rev);




	arr[0] = 0xab;
	arr[1] = 0xcd;
	arr[2] = 0xef;
	arr[3] = 0x12;
	int i =0 ;
	int s = 0;int e = 3;
	while(s<e){
		int temp = arr[s];
		arr[s] = arr[e];
		arr[e] = temp;
		s++;
		e--;
	}
	printf("after sawpping : \n");
	for(int i=0;i<4;i++){
		printf("%x",arr[i]);
	}*/
	printf("\n");
	return 0;
}
