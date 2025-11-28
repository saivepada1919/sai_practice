#include <stdio.h>
#include <stdlib.h>
#define  MAX 5
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
int pop(){
	if(top == -1){
		printf("stack underflow\n");
		exit(1);
	}
	int value = stack_arr[top];
	top--;
	return value;
}

int main(){
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);
	int data = pop();
	printf("delete top most element : %d\n",data);
	return 0;
}
