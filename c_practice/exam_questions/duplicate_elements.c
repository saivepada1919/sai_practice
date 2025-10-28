#include <stdio.h>
int main(){
	int a[7]={1,2,3,4,1,2,3};
	int visited[7]={0};
	for(int i =0;i<7;i++){
		if(visited[i]==1){
			continue;
		}

		int count =1;
		for(int j=i+1;j<7;j++){
			if(a[i]==a[j]){
				count++;
				visited[i]=1;
			}
		}
		if (count>1){
			printf("%d times : %d\n",a[i],count);
		}
	}
	return 0;
}


