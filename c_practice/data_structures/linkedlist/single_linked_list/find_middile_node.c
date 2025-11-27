#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node *next;
};

struct node *head = NULL,*tail = NULL;
void insert_at_end(int data){
	struct node *temp = malloc(sizeof(struct node));
	temp->data = data;
	temp->next = NULL;
	if(head == NULL){
		head = tail = temp;
	}
	else{
		tail->next = temp;
		tail = temp;
	}
}
int count(){
	int c = 0;
	struct node *current = head;
	while(current != NULL){
		c++;
		current = current->next;
	}
	return c;
}
void middle(int n){
	struct node *current = head;
	int c=0;
	while(current != NULL){
		c++;
		if(c == n){
			printf("middle node is : %d\n",current->data);
		       	break;
		}	    
		current = current->next;
	}
}
	

int main(){
	int n;
	while(1){
		printf("enter the data : ");
		scanf("%d",&n);
		if(n == -1){
			break;
		}
		insert_at_end(n);
	}
	int c = count();
	c = c/2;
	middle(c);
	return 0;
}


