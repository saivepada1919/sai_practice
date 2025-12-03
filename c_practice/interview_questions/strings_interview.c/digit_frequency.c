#include <stdio.h>
#include <string.h>

int main() {
	char str[1000];
	fgets(str,sizeof(str),stdin);
	str[strcspn(str,"\n")] = '\0';
	int len = strlen(str);
	int visted[len];
	for(int i=0;i<len;i++){
		visted[i] = 0;
	}
	for(int i=0;i<len ;i++){
		if(visted[i] == 1){
			continue;
		}
		int count = 1;
		for(int j=i+1;j<len;j++){
			if(str[i] == str[j]){
				count++;
				visted[j] = 1;
			}		
		}
		printf("%d ",count);
	}
	return 0;
}

