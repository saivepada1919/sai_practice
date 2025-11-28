#include <stdio.h>
#define MAX 5
int queue[MAX];
int front = -1,rear = -1;
int isFull(){
	return (front == (rear+1)%MAX);
}
int isEmpty(){
	return front==-1;
}
void enqueue(int data){
	if(isFull()){
		printf("Queue Overflow\n");
		return;
	}
	if(front == -1){
		front = 0;
	}
	rear = (rear+1)%MAX;
	queue[rear] = data;
}
int dequeue(){
	if(isEmpty()){
		printf("Queue underflow\n");
		return -1;
	}
	int data = queue[front];
	if(front == rear){
		front = -1;
		rear = -1;
	}
	else{
		front = (front+1)%MAX;
	}
	return data;
}
int peek(){
	if(isEmpty()){
                printf("Queue underflow\n");
                return -1;
        }
	return queue[front];
}
void display(){
	if(isEmpty()){
                printf("Queue underflow\n");
                return;
        }
	int i=front;
	while(i!=rear){
		printf("%d ",queue[i]);
		i = (i+1)%MAX;
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
