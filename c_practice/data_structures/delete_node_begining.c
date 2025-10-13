#include <stdio.h>
#include <stdlib.h>


struct node{
	int data;
	struct node* link;
};
int main(){
	int n;
	printf("enter no of nodes you want to create: ");
	scanf("%d",&n);
	struct node *head = NULL,*current = NULL,*temp = NULL;
	for(int i=1;i<=n;i++){
		temp = malloc(sizeof(struct node));
		printf("enter the data at node %d: ",i);
		scanf("%d",&temp->data);
		temp->link=NULL;

		if(head == NULL){
			head = temp;
			current = temp;
		}
		else{
			current->link = temp;
			current = temp;
		}
	}
	//before delete first element 
	current = head;
	printf("before deletion nodes:\n");
	while(current != NULL){
		printf(" %d ->",current->data);
		current = current->link;
	}
	printf(" NULL\n");

	//deleting first node
/*	int count =0;
	current = head;
	while(current != NULL){
		count ++;
		if(count == 1){
			head = current->link;
			break;
		}
	} */
	if(head != NULL){
		temp=head;
		head=head->link;
		free(temp);
	}
	//after delete first element 
        current = head;
        printf("after deletion nodes:\n");
        while(current != NULL){
                printf(" %d ->",current->data);
                current = current->link;
        }
        printf(" NULL\n");
	return 0;

}
