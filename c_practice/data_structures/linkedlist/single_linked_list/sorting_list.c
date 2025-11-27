#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node *next;
};
struct node *insert_at_end(struct node *head,int data){
	struct node *temp,*current;
	temp = malloc(sizeof(struct node));
	temp->data = data;
	temp->next = NULL;
	if(head == NULL){
		head = temp;
		return head;
	}
	else{
		current = head;
		while(current->next != NULL){
			current = current->next;
		}
		current->next = temp;
		return head;
	}
}
struct node *sorting(struct node *head){
	struct node *temp,*current;
	for(temp = head;temp->next != NULL;temp = temp->next){
		for(current  = head;current->next != NULL;current = current->next){
			if(current->data > current->next->data){
				int sort = current->data;
				current->data = current->next->data;
				current->next->data = sort;
			}
		}
	}
	return head;
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
	int n;
	printf("enter the n value : ");
	scanf("%d",&n);
	int k;
	printf("enter values to nodes  : ");
	for(int i=1;i<=n;i++){
		scanf("%d",&k);
		head = insert_at_end(head,k);
	}
	printf("before sorting nodes : ");
	print(head);
	sorting(head);
	printf("after sorting nodes : ");
	print(head);
	return 0;
}

