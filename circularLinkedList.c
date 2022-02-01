#include <stdio.h>
#include <stdlib.h>
struct node
{
        int data;
        struct node *link;
};
struct node *head = NULL, *cur, *temp, *temp1, *t1;

struct node *create()
{
    int n;
    printf("Enter no of nodes : ");
    scanf("%d", &n);
    while (n--) {
        cur = (struct node *)malloc(sizeof(struct node));
        printf("Enter node data : ");
        scanf("%d", &(cur->data));
        if (head == NULL) {
            cur->link = cur;
            head = cur;
        } else {
             temp = head;
             while (temp->link != head) {
                  temp = temp->link;
             }
             temp->link = cur;
             cur->link = head;
             }
        }
        return head;
}

struct node *insert_begin(int ele)
{
        cur = (struct node *)malloc(sizeof(struct node));
        cur->data = ele;
        temp = head;
        while (temp->link != head)
            temp = temp ->link;
            temp->link = cur;
            cur->link = head;
            head = cur;
            return head;
}
struct node *insert_pos(int pos,int ele){
    cur = (struct node*)malloc(sizeof(struct node));
    cur -> data = ele;
    int c= 1;
    temp = head;
    while(c < pos - 1){
        temp = temp -> link;
        c++;
    }
    cur -> link = temp -> link;
    temp -> link = cur;
    return head;
}

struct node *delete_begin(struct node *head)
{
        temp = head;
        while (temp->link != head)
               temp = temp->link;
                t1 = head;
               temp->link = head->link;
               head = head->link;
               printf("Deleted element : %d\n", t1->data);
               free(t1);
       return head;
}
struct node *delete_pos(struct node *head,int pos){
    int c= 1;
    temp = head;
    while(c < pos){
        temp1 = temp;
        temp = temp -> link;
        c++;
    }
    temp1 -> link = temp -> link;
    printf("deleted element:%d\n",temp -> data);
    free(temp);
    return head;
}
void display(struct node* head){
            temp = head;
            while(temp -> link != head){
                printf("%d->", temp -> data);
                temp = temp -> link;
            }                                        
            printf("%d\n", temp-> data);
}


int main(){
    int ch, ele, pos, key;
    while(1){
        printf("1 : create\n2 : insert_begin\n3 : insert_pos\n4 : delete_begin\n5 : delete_pos\n6 : display\n7 : exit\n");
        printf("Enter choice :\n");
        scanf("%d", &ch);
        switch(ch){
        case 1:
            head = create();
            break;
        case 2:
            printf("Element to be inserted : ");
            scanf("%d", &ele);
            head = insert_begin(ele);
            break;
        case 3:
            printf("Element to be inserted : ");
            scanf("%d", &ele);
            printf("enter the position:\n");
            scanf("%d",&pos);
            head = insert_pos(pos,ele);
            break;
        case 4:
            head = delete_begin(head);
            break;
        case 5:
            printf("enter the position:\n");
            scanf("%d",&pos);
            head = delete_pos(head,pos);
            break;
        case 6:
            display(head);
            break;
        case 7:
            exit(0);
        }
}

}


/*

OUTPUT:
1 : create
2 : insert_begin
3 : insert_pos
4 : delete_begin
5 : delete_pos
6 : display
7 : exit
Enter choice :
1
Enter no of nodes : 5
Enter node data : 1
Enter node data : 2
Enter node data : 3
Enter node data : 4
Enter node data : 5
 1 : create
2 : insert_begin
3 : insert_pos
4 : delete_begin
5 : delete_pos
6 : display
7 : exit
Enter choice :
2
Element to be inserted : 9
 1 : create
2 : insert_begin
3 : insert_pos
4 : delete_begin
5 : delete_pos
6 : display
7 : exit
Enter choice :
6
9->1->2->3->4->5
 1 : create
2 : insert_begin
3 : insert_pos
4 : delete_begin
5 : delete_pos
6 : display
7 : exit
Enter choice :
3
Element to be inserted : 8
enter the position:
2
 1 : create
2 : insert_begin
3 : insert_pos
4 : delete_begin
5 : delete_pos
6 : display
7 : exit
Enter choice :
6
9->8->1->2->3->4->5
 1 : create
2 : insert_begin
3 : insert_pos
4 : delete_begin
5 : delete_pos
6 : display
7 : exit
Enter choice :
4
Deleted element : 9
 1 : create
2 : insert_begin
3 : insert_pos
4 : delete_begin
5 : delete_pos
6 : display
7 : exit
Enter choice :
5
enter the position:
5
deleted element:4
 1 : create
2 : insert_begin
3 : insert_pos
4 : delete_begin
5 : delete_pos
6 : display
7 : exit
Enter choice :
6
8->1->2->3->5
 1 : create
2 : insert_begin
3 : insert_pos
4 : delete_begin
5 : delete_pos
6 : display
7 : exit
Enter choice :
7

*/