#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node *next;
};
int isEmpty(struct node *top){
	if(top == NULL){
		return 1;
	}
	else{
		return 0;
	}
}
struct node *push(struct node *top,int data){
	struct node *temp = malloc(sizeof(struct node));
	if(temp == NULL){
		printf("stack overflow\n");
		exit(1);
	}
	temp->data = data;
	temp->next = NULL;
	temp->next = top;
	top = temp;
	return top;
}
struct node *pop(struct node *top){
	if(isEmpty(top)){
		printf("stack underflow\n");
		exit(1);
	}
	struct node *temp = NULL;
	temp = top;
	top = top->next;
	return temp;
}

void print(struct node *top){
	if(isEmpty(top)){
		printf("Stack underflow\n");
		exit(1);
	}
	struct node *temp = top;
	while(temp != NULL){
		printf("%d ",temp->data);
		temp = temp->next;
	}
	printf("\n");
}
	
int main(){
	struct node *top = NULL,*top1 = NULL,*top2 = NULL,*temp = NULL;
	top = push(top,1);
	top = push(top,2);
	top = push(top,3);
	print(top);
	temp = pop(top);
	top = top->next;
	top1 = push(top1,temp->data);
	print(top1);
	temp = pop(top);
	top = top->next;
	top1 = push(top1,temp->data);
	print(top1);
	return 0;
}

