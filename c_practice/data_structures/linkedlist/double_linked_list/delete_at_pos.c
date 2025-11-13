#include <stdio.h>
#include <stdlib.h>
struct node {
	struct node *prev;
	int data;
	struct node *next;
};
struct node *insert_at_first(struct node *head,int data){
	struct node *temp = malloc(sizeof(struct node));
	temp->prev = NULL;
	temp->data = data;
	temp->next = NULL;
	if(head == NULL){
		head = temp;
		return head;
	}
	else{
		temp->next = head;
		head->prev = temp;
		head = temp;
		return head;
	}
}
struct node *delete_at_pos(struct node *head,int pos){
	struct node *temp1,*temp2;
	temp1 = head;
	if(pos == 1){
		head = head->next;
		if(head != NULL){
			head->prev = NULL;
		}
		free(temp1);
		return head;
	}
	else{	
		while(pos > 1){
			temp1 = temp1->next;
			pos--;
		}
		if(temp1->next == NULL){
			temp2 = temp1->prev;
			temp2->next = NULL;
			free(temp1);
			return head;
		}
		else{	
			temp2 = temp1->prev;
			temp2->next = temp1->next;
			temp1->next->prev = temp2;
			free(temp1);
			return head;
		}
	}
}


void print(struct node *head){
	struct node *current = head;
	while(current != NULL){
		printf("%d -> ",current->data);
		current = current->next;
	}
	printf("NULL\n");
}

int main(){
	struct node *head = NULL;
	int n = 5,k;
	printf("enter the values : ");
	for(int i=0;i<5;i++){
		scanf("%d",&k);
		head = insert_at_first(head,k);
		print(head);
	}
	head = delete_at_pos(head,5);
	print(head);
	head = delete_at_pos(head,3);
        print(head);
	head = delete_at_pos(head,1);
        print(head);



}
