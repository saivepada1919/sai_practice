#include <stdio.h>
#include <stdlib.h>


struct node{
        int data;
        struct node* link;
};
struct node *deletion(struct node *head,int pos){
	struct node *temp=NULL,*current=NULL;
	int count =0;
        if(pos == 1){
                temp =head;
                head = head->link;
                free(temp);
		return head;
        }
        else{
                current = head;
                while(current != NULL){
                      count ++;
                      if(count == pos-1 && current->link != NULL){
                        temp = current->link;
                        current->link = temp->link;
                        free(temp);
                        break;
                      }
                      current=current->link;
                   }
	           return head;
	}
}



int main(){
        int n,pos;
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

        //deleting given  position  node
	

	printf("enter position you want to delete: ");
	scanf("%d",&pos);
	deletion(head,pos);
 /*       int count =0;
	if(pos == 1){
		temp =head;
		head = head->link;
		free(temp);
	}
	else{
		current = head;
                while(current != NULL){
                      count ++;
                      if(count == pos-1 && current->link != NULL){
                        temp = current->link;
			current->link = temp->link;
			free(temp);
                        break;
                      }
		      current=current->link;
                   }
	   } */
	 	
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

