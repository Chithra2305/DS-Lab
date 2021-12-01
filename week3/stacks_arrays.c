#include <stdio.h>
#include <stdlib.h>
#define size 5
int top = -1, stack[size];
void push(int ele){
    stack[++top] = ele;
}
int pop(){
    return stack[top--];
}
int peak(){
    return (stack[top]);
}
void display(){
    printf("\n");
    for(int i = top; i >= 0; i--){
        printf("%d\n", stack[i]);
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
                if(top == size - 1)
                    printf("\nStack Overflow");
                else{
                    printf("\nEnter element to be inserted: ");
                    scanf("%d", &ele);
                    push(ele);
                }
                break;
            case 2:
                if (top == -1)
                    printf("\nStack Underflow");
                else
                    printf("\nDeletd element is %d", pop());
                break;
            case 3:
                if(top == -1)
                    printf("\nStack Underflow");
                else    
                    printf("\nTop element is %d", peak());
                break;
            case 4:
                if(top == -1)
                    printf("\nStack underflow");
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

Enter element to be inserted: 10

1-Push
2-Pop
3-Peak
4-Display
5-Exit
Enter your choice: 1

Enter element to be inserted: 20

1-Push
2-Pop
3-Peak
4-Display
5-Exit
Enter your choice: 1

Enter element to be inserted: 30

1-Push
2-Pop
3-Peak
4-Display
5-Exit
Enter your choice: 1

Enter element to be inserted: 40

1-Push
2-Pop
3-Peak
4-Display
5-Exit
Enter your choice: 1

Enter element to be inserted: 50

1-Push
2-Pop
3-Peak
4-Display
5-Exit
Enter your choice: 1

Stack Overflow
1-Push
2-Pop
3-Peak
4-Display
5-Exit
Enter your choice: 4

50
40
30
20
10

1-Push
2-Pop
3-Peak
4-Display
5-Exit
Enter your choice: 3

Top element is 50
1-Push
2-Pop
3-Peak
4-Display
5-Exit
Enter your choice: 2

Deletd element is 50
1-Push
2-Pop
3-Peak
4-Display
5-Exit
Enter your choice: 4

40
30
20
10

1-Push
2-Pop
3-Peak
4-Display
5-Exit
Enter your choice: 5
*/