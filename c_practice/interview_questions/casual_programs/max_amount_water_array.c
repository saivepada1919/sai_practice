#include <stdio.h>
int max(int i,int j){
	int b = 0;
	if(i>j){
		b = i-j;
	}
	else{
		b = j-i;
	}
	return b;
}
int less(int i,int j){
	if(i>j){
		return j;
	}
	else{
		return i;
	}
}

int main(){
	int n;
	printf("enter the n value : ");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements : ");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int l=0,b=0;
	int area = 0;
	int min = 0;
	for(int i=0;i<n;i++){
		for(int j =i+1;j<n;j++){
			l = less(arr[i],arr[j]);
			b = max(i,j);
			area = l*b;
			if(area > min){
				min = area;
			}
		}
	}
	printf("the maximum area is : %d\n",min);
	return 0;
}





