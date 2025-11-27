#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node *next;
};
struct node *insert_at_first(struct node *head,int data){
	struct node *temp = malloc(sizeof(struct node));
	temp->data = data;
	temp->next = NULL;
	if(head == NULL){
		head = temp;
		return head;
	}
	else{
		temp->next = head;
		head = temp;
		return head;
	}
}
struct node *selection_sorting(struct node *head){
	struct node *i,*j,*min;
	i = head;
	for(i = head;i!= NULL;i = i->next){
		min = i;
		for(j = i->next;j != NULL;j=j->next){
			if(min->data > j->data){
				min = j;
			}
		}
		if(min !=i){
		int temp = i->data;
		i->data = min->data;
		min->data = temp;
		}
	}
	return head;
}
void print(struct node *head){
	struct node *current = head;
	current = head;
	while(current != NULL){
		printf("%d -> ",current->data);
		current = current->next;
	}
	printf("NULL\n");
}

int main(){
	int n;
	printf("enter n value :");
	scanf("%d",&n);
	struct node *head = NULL;
	printf("enter the values : ");
	int data;
	for(int i = 1;i<=n;i++){
		scanf("%d",&data);
		head = insert_at_first(head,data);
	}
	printf("bofore sorting linked list : ");
	print(head);
	head = selection_sorting(head);
	printf("after sorting linked list : ");
	print(head);
	return 0;
}


