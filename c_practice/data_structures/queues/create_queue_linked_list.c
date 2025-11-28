#include <stdlib.h>
#include <stdio.h>
struct node {
	int data;
	struct node *next;
};
struct node *front = NULL,*rear = NULL;
int isEmpty(){
	if(front == NULL){
		return 1;
	}
	else{
		return 0;
	}
}
void enqueue(int data){
	struct node *temp = malloc(sizeof(struct node));
	temp->data = data;
	temp->next = NULL;
	if(rear == NULL){
		front = rear = temp;
	}
	else{
		rear->next = temp;
		rear = temp;
	}
}
int dequeue(){
	if(isEmpty()){
		printf("queue is underflow\n");
		return -1;
	}
	struct node *temp = NULL;
	temp = front;
	int data = front->data;
	front = front->next;
	if(front == NULL){
		rear == NULL;
	}
	free(temp);
	return data;
}
int peek(){
	if(isEmpty()){
                printf("queue is underflow\n");
                return -1;
        }
	return front->data;
}
void display(){
	if(isEmpty()){
                printf("queue is underflow\n");
                return;
        }
	struct node *temp = front;
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp = temp->next;
	}
	printf("\n");
}

	


int main(){
	int choice, data;
	while(1){
		printf("1.Enqueue\n");
		printf("2.Dequeue\n");
		printf("3.peek\n");
		printf("4.Display\n");
		printf("5.Quit\n");
		printf("enter your choice : ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("enter element : ");
				scanf("%d",&data);
				enqueue(data);
				break;
			case 2:
				printf("deleted element : %d\n",dequeue());
				break;
			case 3:
				printf("present front element : %d\n",peek());
			        break;
			case 4:
				printf("elements in queue : ");
			       	display();
				break;
			case 5:
				printf("THANK YOU\n");
				return 0;
			default:
				printf("invaild input\n");
		}
	}
	return 0;
}

