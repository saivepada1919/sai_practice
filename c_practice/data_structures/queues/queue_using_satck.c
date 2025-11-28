#include <stdio.h>
#define MAX 5
int queue1[MAX],queue2[MAX];
int top1 = -1,top2 = -1;
int count=0;
int isFull1(){
	if(top1 == MAX-1){
		return 1;
	}else{
		return 0;
	}
}
int isFull2(){
        if(top2 == MAX-1){
                return 1;
        }else{
                return 0;
        }
}
int isEmpty(){
	return count == 0;
}
void push1(int data){
	if(isFull1()){
		printf("queue overflow\n");
		return;
	}
	top1++;
	queue1[top1] = data;
}
void push2(int data){
        if(isFull2()){
                printf("queue overfloe\n");
                return;
        }
        top2++;
        queue2[top2] = data;
}
int pop1(){
	if(isEmpty()){
		printf("queue underflow\n");
		return -1;
	}
	int data = queue1[top1];
	top1--;
	return data;
}
int pop2(){
        if(isEmpty()){
                printf("queue underflow\n");
                return -1;
        }
        return queue2[top2--];
}
void enqueue(int data){
	push1(data);
	count++;
} 
int dequeue(){
	int a,b;
	if(isEmpty()){
		printf("Queue underflow\n");
		return -1;
	}
	for(int i=0;i<count;i++){
		a=pop1();
		push2(a);
	}
	b = pop2();
	count--;
	for(int i=0;i<count;i++){
		a = pop2();
		push1(a);
	}
	return b;
}
int peek(){
	if(isEmpty()){
                printf("Queue underflow\n");
                return -1;
        }
	int data = queue1[0];
	return data;
}
void display(){
	for(int i=0;i<=top1;i++){
		printf("%d ",queue1[i]);
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
