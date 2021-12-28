#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root = NULL, *cur, *temp;
struct node* create(){
    cur = (struct node*)malloc(sizeof(struct node));
    scanf("%d", &(cur -> data));
    cur -> left = NULL;
    cur -> right = NULL;
    if(root == NULL){
        root = cur;
    }
    else{
        temp = root;
        while(temp != NULL){
            if(cur -> data < temp -> data && temp -> left == NULL){
                temp -> left = cur;
                return root;
            }
            else if(cur -> data < temp -> data && temp -> left != NULL){
                temp = temp -> left;
            }
            else if(cur -> data > temp -> data && temp -> right == NULL){
                temp -> right = cur;
                return root;
            }
            else if(cur -> data > temp -> data && temp -> right != NULL){
                temp = temp -> right;
            }
        }
    }
}
void preorder(struct node * root){
    if(root != NULL){
        printf("%d\n", root -> data);
        preorder(root -> left);
        preorder(root -> right);    
    }
}
void inorder(struct node * root){
    if(root != NULL){
        inorder(root -> left);
        printf("%d\n", root -> data);
        inorder(root -> right);
    }
}
void postorder(struct node * root){
    if(root != NULL){
        postorder(root -> left);
        postorder(root -> right);
        printf("%d\n", root -> data);
    }
}
int main(){
    int ch;
    while(1){
        printf("1-Create\n2-Preorder\n3-Inorder\n4-Postorder\n5-Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch){
        case 1:
            root = create();
            break;
        case 2:
            preorder(root);
            break;
        case 3:
            inorder(root);
            break;
        case 4:
            postorder(root);
            break;
        case 5:
            exit(0);
        }
    }
    return  0;
}
/* 
Output:
1-Create
2-Preorder
3-Inorder
4-Postorder
5-Exit
Enter your choice: 1
58
1-Create
2-Preorder
3-Inorder
4-Postorder
5-Exit
Enter your choice: 1
75
1-Create
2-Preorder
3-Inorder
4-Postorder
5-Exit
Enter your choice: 1
13
1-Create
2-Preorder
3-Inorder
4-Postorder
5-Exit
Enter your choice: 1
28
1-Create
2-Preorder
3-Inorder
4-Postorder
5-Exit
Enter your choice: 1
34
1-Create
2-Preorder
3-Inorder
4-Postorder
5-Exit
Enter your choice: 1
70
1-Create
2-Preorder
3-Inorder
4-Postorder
5-Exit
Enter your choice: 1
20
1-Create
2-Preorder
3-Inorder
4-Postorder
5-Exit
Enter your choice: 1
98
1-Create
2-Preorder
3-Inorder
4-Postorder
5-Exit
Enter your choice: 1
16
1-Create
2-Preorder
3-Inorder
4-Postorder
5-Exit
Enter your choice: 1
5
1-Create
2-Preorder
3-Inorder
4-Postorder
5-Exit
Enter your choice: 1
92
1-Create
2-Preorder
3-Inorder
4-Postorder
5-Exit
Enter your choice: 1
60
1-Create
2-Preorder
3-Inorder
4-Postorder
5-Exit
Enter your choice: 2
58
13
5
28
20
16
34
75
70
60
98
92
1-Create
2-Preorder
3-Inorder
4-Postorder
5-Exit
Enter your choice: 3
5
13
16
20
28
34
58
60
70
75
92
98
1-Create
2-Preorder
3-Inorder
4-Postorder
5-Exit
Enter your choice: 4
5
16
20
34
28
13
60
70
92
98
75
58
1-Create
2-Preorder
3-Inorder
4-Postorder
5-Exit
Enter your choice: 5 */