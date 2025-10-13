#include <stdlib.h>
#include <stdio.h>
struct node {
        int data;
        struct node *link;
};

void counting(struct node *head){
	int count =0;
	struct node *temp = head;
        while(temp!=NULL){
                count++;
                temp=temp->link;
        }
        printf("count of nodes: %d\n",count);

}
int main(){
        struct node *head = (struct node*)malloc(sizeof(struct node));
        head->data = 50;
        head->link = NULL;

        struct node* current= (struct node*)malloc(sizeof(struct node));
        current->data = 60;
        head->link=current;
        current->link = NULL;

        current= (struct node*)malloc(sizeof(struct node));
        current->data = 70;
        current->link = NULL;

        head->link->link = current;
	counting(head);
        return 0;
}

