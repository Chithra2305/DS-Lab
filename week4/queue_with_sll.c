#include<stdio.h>
#include<stdlib.h>
#define size 5
struct node{
    int data;
    struct node *link;
};
struct node *front = NULL,*rear = NULL,*cur;
void enqueue(){
    cur = (struct node*)malloc(sizeof(struct node));
    printf("enter data\n");
    scanf("%d",&cur -> data);
    cur -> link = NULL;
    if(front == NULL){
        front = rear = cur;
    }
    else{
        rear -> link = cur;
        rear = cur;
    }
}
int dequeue(){
    if(front == NULL){
        printf("queue underflow\n");
    }
    else if(rear == front){
        printf("deleted element %d\n",front -> data);
        front = rear = NULL;
    }
    else{
        printf("deleted element %d\n",front -> data);
        front = front -> link;
    }
  
}
void display(){
    printf("elements are:\n");
    if(front == NULL){
        printf("queue underflow\n");
    }
    else{
        cur = front;
        while(cur != NULL){
            printf("%d\n",cur -> data);
            cur = cur -> link;
        }
    }
}
int main(){
    int ch,ele;
    while(1){
        printf("1 - enqueue\n2 - dequeue\n3 - display\n4 - exit\n");
        printf("enter your choice\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
            enqueue();
            break;
            case 2:
            if(front == NULL){
                printf("queue underflow\n");
            }
            else{
                dequeue();
            }
            break;
            case 3:
            if(front == NULL){
                printf("queue underflow\n");
            }
            else{
                display();
            }
            break;
            case 4:
            exit(0);
        }
    }
}