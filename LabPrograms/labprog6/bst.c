#include <stdio.h>
#include <stdlib.h>
struct node {
    int info;
    struct node *left;
    struct node *right;
};
typedef struct node *NODE;

NODE insert (NODE root,int item)
{
    NODE newnode,prev = NULL,pres;
    newnode = (NODE)malloc(sizeof(struct node));
    newnode->info = item;
    newnode->left = newnode->right = NULL;
    if (root == NULL)
    {
        root = newnode;
        return root;
    }
    pres = root;
    while (pres != NULL)
    {
        prev = pres;
        if (item < pres->info)
            pres = pres->left;
        else if (item > pres->info)
            pres = pres->right;
        else
        {
            printf ("Duplication of Item not allowed\n");
            return root;
        }
    }
    if (item < prev->info)
        prev->left = newnode;
    else
        prev->right = newnode;
    return root;
} 

void Preorder (NODE root) {
    if (root != NULL) {
        printf("%d\t",root->info);
        Preorder (root->left);
        Preorder (root->right);
    }
}

int main () {
    NODE root = NULL;
    int ch,item;

    for (;;) {
        printf ("\n1:INSERT 2:PREORDER\n");
        scanf ("%d",&ch);
        switch (ch) {
            case 1: printf ("Enter the Item\n");
                    scanf ("%d",&item);
                    root = insert(root,item);
                    break;
            case 2: if (root == NULL)
                    printf ("Empty Tree\n");
                    else{
                    printf ("Preorder:\n");
                    Preorder(root);
                    }
                    break;
            default: exit (0);
        }
    }
}