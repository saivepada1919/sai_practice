#include <stdio.h>
#define MAX 6
int queue[MAX];
int front = -1,rear = -1;
void enqueue_front(int data){
	if((front == rear+1) || (front == 0 && rear == MAX-1)){
		printf("QUEUE OVERFLOW\n");
		return;
	}
	else if(front == -1 && rear == -1){
		front = rear = 0;
		queue[front] = data;
	}
	else if(front == 0){
		front = MAX-1;
		queue[front] = data;
	}else{
		front--;
		queue[front] = data;
	}
}
void enqueue_rear(int data){
	if((front == rear+1) || (front == 0 && rear == MAX-1)){
		printf("QUEUE OVERFLOW\n");
		return;
	}
	else if(front == -1 && rear == -1){
		front = rear = 0;
		queue[rear] = data;
	}
	else if(rear == MAX-1){
		rear = 0;
		queue[rear] = data;
	}
	else{
		rear++;
		queue[rear] = data;
	}
}
int dequeue_front(){
	int data;
	if(front == -1 && rear == -1){
		printf("QUEUE UNDERFLOW\n");
		return -1;
	}
	else if(front == rear){
		data = queue[front];
		front = rear = -1;
	}		
	else if(front == MAX-1){
		data = queue[front];
		front = 0;
	}
	else{	
		data = queue[front];
		front++;
	}
	return data;	
}
int dequeue_rear(){
	int data;
	if(front == -1 && rear == -1){
		printf("QUEUE UNDERFLOW\n");
		return -1;
	}
	else if(front == rear){
		data = queue[rear];
		front = rear = -1;
	}
	else if(rear == 0){
		data = queue[rear];
		rear = MAX-1;
	}
	else{
		data = queue[rear];
		rear--;
	}
	return data;
}
int peek_front(){
	if(front == -1 && rear == -1){
		printf("QUEUE UNDERFLOW\n");
		return -1;
	}
	return queue[front];
}
int peek_rear(){
	if(front == -1 && rear == -1){
		printf("QUEUE UNDERFLOW\n");
		return -1;
	}
	return queue[rear];
}
void display(){
	int i = front;
	while(i!=rear){
		printf("%d ",queue[i]);
		i = (i+1)%MAX;
	}
	printf("%d ",queue[rear]);
	printf("\n");
}	
int main(){
	int data,choice;
	while(1){
		printf("1.Enqueue front\n");
		printf("2.Enqueue rear\n");
		printf("3.Dequeue front\n");
		printf("4.Dequeue rear\n");
		printf("5.Peek front\n");
		printf("6.Peek rear\n");
		printf("7.Display\n");
		printf("8.Quit\n");
		printf("enter your choice : ");
                scanf("%d",&choice);
                switch(choice){
                        case 1:
                                printf("enter element : ");
                                scanf("%d",&data);
                                enqueue_front(data);
                                break;
			case 2:
                                printf("enter element : ");
                                scanf("%d",&data);
                                enqueue_rear(data);
                                break;
                        case 3:
                                printf("deleted element : %d\n",dequeue_front());
                                break;
			case 4:
                                printf("deleted element : %d\n",dequeue_rear());
                                break;

                        case 5:
                                printf("present front element : %d\n",peek_front());
                                break;

                        case 6:
                                printf("present front element : %d\n",peek_rear());
                                break;
                        case 7:
                                printf("elements in queue : ");
                                display();
                                break;
                        case 8:
                                printf("THANK YOU\n");
                                return 0;
                        default:
                                printf("invaild input\n");
                }
        }
        return 0;
}
