#include <stdio.h>
#include <string.h>
int main(){
	char str[] = "saivepada is embedded employee";
	/*int l = strlen(str);
	int visted[l];
	for(int i=0;i<l;i++){
		visted[i] = 0;
	}
	for(int i = 0;i<l;i++){
		if(visted[i] == 1){
			continue;
		}
		int count = 1;
		for(int j = i+1;j<l;j++){
			if(str[i] == str[j]){
				count++;
				visted[j] = 1;
			}
		}
		printf("count of %c : %d\n",str[i],count);
	}*/


	int freq[256] = {0};
	for(int i=0;str[i] !='\0';i++){
		if(str[i] != ' '){
			freq[str[i]]++;
		}
	}
	for(int i =0;i<256;i++){
		if(freq[i] > 0){
			printf("count of characher %c : %d\n",i,freq[i]);
		}
	}
}
