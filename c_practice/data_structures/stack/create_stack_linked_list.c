#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node *next;
};
struct node *top = NULL;
int isEmpty(){
	if(top == NULL){
		return 1;
	}
	else{
		return 0;
	}
}
void push(int data){
	struct node *new = malloc(sizeof(struct node));
	if (new == NULL){
		printf("Stack Overflow\n");
		exit(1);
	}
	new->data = data;
	new->next = NULL;
	new->next = top;
	top = new;
}
int pop(){
	if(isEmpty()){
		printf("stack underflow\n");
		exit(1);
	}
	struct node *temp = NULL;
	temp = top;
	int data = temp->data;
	top = top->next;
	free(temp);
	temp = NULL;
	return data;
}
int peek(){
	if(isEmpty()){
		printf("stack underflow\n");
		exit(1);
	}
	return top->data;
}
void print(){
	struct node *temp = top;
	if(isEmpty()){
		printf("stack underflow\n");
		exit(1);
	}
	while(temp!= NULL){
		printf("%d ",temp->data);
		temp = temp->next;
	}
	printf("\n");
}

int main(){
	int choice,data;
	while(1){
		printf("1.Push\n");
		printf("2.pop\n");
		printf("3.peek element\n");
		printf("4.print elements\n");
		printf("5.quit\n");
		printf("enter your choice : ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("enter the data to stack : ");
				scanf("%d",&data);
				push(data);
				break;
			case 2:
				printf("deleted top most element in stack :%d\n",pop());
				break;
			case 3:
				printf("top/peek element in stack : %d\n",peek());
				break;
			case 4:
				print();
				break;
			case 5:
				printf("THANKYOU\n");
				exit(1);
			default:
				printf("Invalid Input\n");
		}
	}
	return 0;
}
