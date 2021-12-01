#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node * link;
};
struct node * top = NULL, *cur, *temp;
void push(int ele){
    cur = (struct node*)malloc(sizeof(struct node));
    cur -> data = ele;
    if(top == NULL)
        cur -> link = NULL;
    else{
        cur -> link = top;
    }
    top = cur;
}
void pop(){
    temp = top;
    if(top == NULL)
        printf("\nStack Underflow");
    else{
        top = top -> link;
        printf("\nDeleted Element is %d", temp -> data);
        free(temp);
    }
}
int peak(){
    return (top -> data);
}
void display(){
    temp = top;
    printf("\n");
    while(temp != NULL){
        printf("%d\n", temp -> data);
        temp = temp -> link;
    }
}
int main(){
    int ch, ele;
    while(1){
        printf("\n1-Push\n2-Pop\n3-Peak\n4-Display\n5-Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch(ch){
            case 1:
                printf("\nEnter element: ");
                scanf("%d", &ele);
                push(ele);
                break;
            case 2:
                if(top == NULL)
                    printf("\nStack Underflow");
                else    
                    pop();
                break;
            case 3:
                if(top == NULL)
                    printf("\nStack Underflow");
                else    
                    printf("\nTopmost Element is %d", peak());
                break;
            case 4:
                if(top == NULL)
                    printf("\nStack Underflow");
                else    
                    display();
                break;
            case 5:
                exit(0);
        }
    }
    return 0;
}

/*
Output:
1-Push
2-Pop
3-Peak
4-Display
5-Exit
Enter your choice: 1

Enter element: 12

1-Push
2-Pop
3-Peak
4-Display
5-Exit
Enter your choice: 1

Enter element: 13

1-Push
2-Pop
3-Peak
4-Display
5-Exit
Enter your choice: 1

Enter element: 14

1-Push
2-Pop
3-Peak
4-Display
5-Exit
Enter your choice: 4

14
13
12

1-Push
2-Pop
3-Peak
4-Display
5-Exit
Enter your choice: 2

Deleted Element is 14
1-Push
2-Pop
3-Peak
4-Display
5-Exit
Enter your choice: 3

Topmost Element is 13
1-Push
2-Pop
3-Peak
4-Display
5-Exit
Enter your choice: 2

Deleted Element is 13
1-Push
2-Pop
3-Peak
4-Display
5-Exit
Enter your choice: 4

12

1-Push
2-Pop
3-Peak
4-Display
5-Exit
Enter your choice: 2

Deleted Element is 12
1-Push
2-Pop
3-Peak
4-Display
5-Exit
Enter your choice: 2

Stack Underflow
1-Push
2-Pop
3-Peak
4-Display
5-Exit
Enter your choice: 5
*/