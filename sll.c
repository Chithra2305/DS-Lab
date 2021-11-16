#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node* link;
};
struct node *head = NULL, *cur, *temp, *temp1;
struct node* create(){
	int n;
	printf("Enter number of node: ");
	scanf("%d", &n);
	while(n--){
		cur = (struct node*)malloc(sizeof(struct node));
		scanf("%d", &(cur->data));
		cur -> link = NULL;
		if(head == NULL)
			head = cur;
		else{
			temp = head;
			while(temp -> link != NULL)
				temp = temp -> link;
			temp -> link = cur;
		}
	}
	return head;
}

struct node* insert_begin(int ele){
	cur = (struct node*)malloc(sizeof(struct node));
	cur -> data = ele;
	cur -> link = head;
	head = cur;
	return head;
}
	
struct node* insert_end(int ele){
	cur = (struct node*)malloc(sizeof(struct node));
	cur -> data = ele;
	cur -> link = NULL;
	temp = head;
	while(temp -> link != NULL)
		temp -> link = cur;
	temp -> link = cur;
	return head;
}

struct node* insert_pos(int pos, int ele){
	cur = (struct node*)malloc(sizeof(struct node));
	cur -> data = ele;
	int c;
	temp = head;
	while(c < pos - 1){
		temp = temp -> link;
		c++;
	}
	cur -> link = temp -> link;
	temp -> link = cur;
	return head;
}

struct node* delete_begin(){
	temp = head;
	head = temp -> link;
	printf("\nDeleted element: %d", temp -> data);
	free(temp);
	return head;
}

struct node* delete_end(){
	temp = head;
	while(temp -> link != NULL)
		temp = temp -> link;
	printf("\nDeleted element: %d", temp -> link -> data);
	free(temp -> link);
	temp -> link = NULL;
	return head;
}

struct node* delete_pos(int pos){
	temp = head;
	int c = 1;
 	while(c < pos){
		temp1 = temp;
		temp = temp -> link;
		c++;
	}
	temp1 -> link = temp -> link;
	printf("\nDelted element: %d", temp -> data);
	free(temp);
	return head;
}
	
int main(){
	create();
	printf("SLL Created");
	printf("To insert");
	insert_begin(6);
	printf("\nInserted at beginning");
	insert_end(78);
	printf("\nInserted at end");
	insert_pos(4, 784);
	printf("\nInserted at positio");
	delete_begin();
	printf("\nDelted at beginning");
	delete_end();
	printf("\nDeleted at end");
	return 0;
}
