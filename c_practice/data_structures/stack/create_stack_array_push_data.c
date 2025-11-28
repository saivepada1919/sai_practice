#include <stdio.h>
#define MAX 6
int stack_arr[MAX];
int top = -1;
void push(int data){
	if(top == MAX-1){
		printf("stack overflow\n");
		return;
	}
	top++;
	stack_arr[top] = data;
}
void display(){
	if(top == -1){
		printf("stack is empty \n");
		return;
	}
	printf("elements in stack : ");
	for(int i=top;i>=0;i--){
		printf("%d ",stack_arr[i]);
	}
	printf("\n");
}
int main(){
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);
	push(6);
	display();
	return 0;
}
