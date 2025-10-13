#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *link;
};

int main(){
	struct node *head=NULL,*current=NULL,*temp=NULL;
	int n;
	printf("enter no.of nodes: ");
	scanf("%d",&n);

	for(int i=1;i<=n;i++){
		temp=malloc(sizeof(struct node));
		printf("enter the data for node %d: ",i);
		scanf("%d",&temp->data);
		temp->link=NULL;
		
		if(head == NULL){
			head=temp;
			current =temp;
		}
		else{
			current->link = temp;
			current = temp;
		}
	}
	printf("Linked list: ");
	current = head;
	while(current != NULL){
		printf("%d -->",current->data);
		current = current->link;
	}
	printf("NULL\n");
	return 0;
}

		

