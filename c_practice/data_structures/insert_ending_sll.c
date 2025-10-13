#include <stdio.h>
#include <stdlib.h>
struct node{
        int data;
        struct node* link;
};
void insert_ending(struct node *head){
	struct node *temp = NULL,*current = NULL;
	temp = malloc(sizeof(struct node));
	printf("enter the data to insert: ");
        scanf("%d",&temp->data);
        temp->link = NULL;

	//traversing to end
        current=head;
        while(current->link != NULL){
                current=current->link;
        }
        current->link = temp;

	//after inserting element at begining
        printf("Linked list before insering elements: ");
        current = head;
        while(current != NULL){
                printf(" %d ->",current->data);
                current = current->link;
        }
        printf(" NULL\n");
} 



int main(){
        struct node *head = NULL,*current = NULL,*temp = NULL;
        int n;
        printf("enter the no of nodes: ");
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
                temp = malloc(sizeof(struct node));
                printf("enter the data for node %d: ",i);
                scanf("%d",&temp->data);
                temp->link = NULL;

                if(head == NULL){
                        head = temp;
                        current = temp;
                }
                else{
                        current->link = temp;
                        current = temp;
                }
        }
        //before inserting elements
        printf("Linked list before insering elements: ");
        current = head;
        while(current != NULL){
                printf(" %d ->",current->data);
                current = current->link;
        }
        printf(" NULL\n");

	insert_ending(head);

/*
       //insert element at ending
        temp = malloc(sizeof(struct node));
        printf("enter the data to insert: ");
        scanf("%d",&temp->data);
        temp->link = NULL;

	//traversing to end
	current=head;
	while(current->link != NULL){
		current=current->link;
	}
	current->link = temp;

        //after inserting element at ending
        printf("Linked list before insering elements: ");
        current = head;
        while(current != NULL){
                printf(" %d ->",current->data);
                current = current->link;
        }
        printf(" NULL\n"); 
	*/

        return 0;
}

