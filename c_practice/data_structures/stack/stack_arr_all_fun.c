#include <stdio.h>
#include <stdlib.h>
#define MAX 6
int stack_arr[MAX];
int top = -1;
int isFull(){
        if(top == MAX-1){
                return 1;
        }
        else{
                return 0;
        }
}
int isEmpty(){
        if(top == -1){
                return 1;
        }
        else{
                return 0;
        }
}
void push(int data){
	if(isFull()){
		printf("Stack overflow\n");
		return;
	}
	top++;
	stack_arr[top] = data;
}
int pop(){
	if(isEmpty()){
		printf("Stack Underflow\n");
		exit(1);
	}
	int data = stack_arr[top];
	top--;
	return data;
}
int peek(){
	 if(isEmpty()){
                printf("Stack Underflow\n");
                exit(1);
        }
	return stack_arr[top];
}
void print(){
	if(isEmpty()){
		printf("stack underflow\n");
		return;
	}
	for(int i = top;i>=0;i--){
		printf("%d ",stack_arr[i]);
	}
	printf("\n");
}

int main(){
	int choice,data;
	while(1){
		printf("1. Push\n");
		printf("2. Pop\n");
		printf("3. Print top element\n");
		printf("4. Print all elements in stack\n");
		printf("5. Quit\n");
		printf("Enter your choice : ");
		scanf("%d",&choice);
		switch(choice){

			case 1:
				printf("enter the data to push onto stack : ");
				scanf("%d",&data);
				push(data);
				break;
			case 2:
				printf("deleted top most element in stack :%d\n",pop());
				break;
			case 3:
				printf("top most element in stack : %d\n",peek());
				break;
			case 4:
				print();
				break;
			case 5:
				exit(1);
			default:
				printf("invalid input\n");
		}
	}
	return 0;
}
