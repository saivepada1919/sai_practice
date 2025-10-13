#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node* inserting_pos(struct node *head,int pos,int val){
	int count=0;
	struct node *temp = NULL,*current = NULL;
	current = head;
	temp=malloc(sizeof(struct node));
	temp->data = val;
	temp->next = NULL;
	if(pos==1){
		temp->next=head;
		head = temp;
		return head;
	}
/*	pos--;
	while(pos !=1){
		current=current->next;
		pos--;
	}
	temp->next = current->next;
	current->next = temp;
}*/
	while(current !=NULL){
		count++;
		if(count == pos-1){
			temp->next=current->next;
			current->next=temp;
			break;
		}
		current=current->next;
	}
   return head;
}
			

int main(){
	struct node *head=NULL,*current = NULL,*temp=NULL;
	int n,pos;
	printf("enter the number of nodes you want: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		temp = malloc(sizeof(struct node));
		printf("enter the data to node %d: ",i);
		scanf("%d",&temp->data);
		temp->next=NULL;

		if(head == NULL){
			head=temp;
			current=temp;
		}
		else{
			current->next = temp;
			current = temp;
		}
	}

	//before inserting new nodes 
	current = head;
	printf("before inserting node:\n");
	while(current != NULL){
		printf("%d -> ",current->data);
		current = current->next;
	}
	printf(" NULL\n");

	int val;
	printf("enter the pos you want to insert: ");
	scanf("%d",&pos);
	printf("enter value: ");
	scanf("%d",&val);
	head=inserting_pos(head,pos,val);
	//after inserting element at particular position
	current = head;
	while(current != NULL){
		printf(" %d ->",current->data);
		current = current->next;
	}
	printf(" NULL\n");

	return 0;
}
