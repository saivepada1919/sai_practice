#include <stdio.h>
#define MAX 5
int queue[MAX];
int front = -1;
int rear = -1;
int isFull(){
	if(rear == MAX-1)
		return 1;
	else
		return 0;
}
int isEmpty(){
	if(front == -1 || front>rear){
		return 1;
	}
	else{
		return 0;
	}
}
void enqueue(int data){
	if(isFull()){
		printf("Queue overflow\n");
		return;
	}
	if(front == -1){
		front = 0;
	}
	rear++;
	queue[rear] = data;
}
int peek(){
	if(isEmpty()){
		printf("Queue Underflow\n");
		return -1;
	}
	return queue[front];
}
int dequeue(){
	if(isEmpty()){
		printf("Queue is underflow\n");
		return -1;
	}
	int data = queue[front];
	front++;
	return data;
}
void display(){
	 if(isEmpty()){
                printf("Queue is underflow\n");
                return;
        }
	for(int i = front;i<=rear;i++){
		printf("%d ",queue[i]);
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

