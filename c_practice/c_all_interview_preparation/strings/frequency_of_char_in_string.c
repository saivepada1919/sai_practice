#include <stdio.h>
#include <string.h>
void frequency(char *str){
	int len = strlen(str);
	int visited[len];
	for(int i = 0;i<len;i++){
		visited[i] = 0;
	}
	int i = 0;
	for(int i = 0;i<len;i++){
		if(str[i] == ' ' || visited[i] == 1){
			continue;
		}
		int count =1;
		for(int j = i+1;j<len;j++){
			if(str[i] == str[j]){
				count++;
				visited[j] = 1;
			}
		}
		printf("frequency of %c : %d\n",str[i],count);
	}
}

		
int main(){
	char str[100];
	printf("enter the string : ");
	fgets(str,100,stdin);
	str[strcspn(str,"\n")] = '\0';
	frequency(str);
	return 0;
}
