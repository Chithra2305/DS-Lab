#include<stdio.h>
#include<stdlib.h>
#define size 5
int front = -1,rear = -1,a[size];
void enqueue(){
    int ele;
    printf("enter element to be inserted\n");
    scanf("%d",&ele);
    a[++rear] = ele;
    if(front == -1){
        front = 0;
    }
}
int dequeue(){
    if(front == rear){
        printf("deleted element %d\n",a[front]);
        front = rear = -1;
    }
    else{
        printf("deleted element %d\n",a[front]);
        front++;
    }
}
void display(){
    printf("elements are:\n");
    for(int i = 0; i <= rear;i++){
        printf("%d\n",a[i]);
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
            if(rear == size - 1){
                printf("queue overflow\n");
            }
            else{
                enqueue();
            }
            break;
            case 2:
            if(front == -1){
                printf("queue underflow\n");
            }
            else{
                dequeue();
            }
            break;
            case 3:
            if(front == -1){
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