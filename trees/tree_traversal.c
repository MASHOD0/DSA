#include <stdio.h>
#include <stdlib.h>

typedef struct tnode{
    int data;
    struct tnode *left;
    struct tnode *right;
} TNODE;
TNODE *CreateBST(TNODE *root, int elem){
    if (root == NULL){
        root = (TNODE *)malloc(sizeof(TNODE));
        root->data = elem;
        root->left = NULL;
        root->right = NULL;
        return root;
    } else{
        if (elem < root->data){
            root->left = CreateBST(root->left, elem);
        } else if (elem > root->data){
            root->right = CreateBST(root->right, elem);
        }
        else
        printf("Duplicate element not allowed\n");
        return root;
    }
}
void Inorder(TNODE *root){
    if (root != NULL){
        Inorder(root->left);
        printf("%d ", root->data);
        Inorder(root->right);
    }
}
void Preorder(TNODE *root){
    if (root != NULL){
        printf("%d ", root->data);
        Preorder(root->left);
        Preorder(root->right);
    }
}
void postorder(TNODE *root){
    if (root != NULL){
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}
int main(){
    TNODE *root = NULL;
    int opn, elem, n, i;
    while(1) {
        printf("Binary Search Tree\n");
        printf("1. Insert\n");
        printf("2. Inorder Traversal\n");
        printf("3. Preorder Traversal\n");
        printf("4. Postorder Traversal\n");
        scanf("%d", &opn);
        switch(opn){
            case 1: root=NULL;
            printf("Enter the number of elements to be inserted\n");
            scanf("%d", &n);
            for(i=0; i<n; i++){
                printf("Insert data for %d", i+1);
                scanf("%d", &elem);
                root=CreateBST(root, elem);
            }
            case 2: Inorder(root); break;
            case 3: Preorder(root); break;
            case 4: postorder(root); break;
            case 5: exit(0);
        }
    }
}