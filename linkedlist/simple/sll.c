#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
typedef struct node *node;

node insertNode(node head, int data){
    node temp = (node)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = head;
    return temp;
}
node insertpos(node head, int data, int pos){
    node temp = (node)malloc(sizeof(struct node));
    temp->data = data;
    if(pos == 0){
        temp->next = head;
        return temp;
    }
    node curr = head;
    int i = 0;
    while(i < pos-1){
        curr = curr->next;
        i++;
    }
    temp->next = curr->next;
    curr->next = temp;
    return head;
}
node deleteNode(node head, int data){
    node curr = head;
    node prev = NULL;
    while(curr != NULL){
        if(curr->data == data){
            if(prev == NULL){
                head = curr->next;
            }
            else{
                prev->next = curr->next;
            }
            free(curr);
            return head;
        }
        prev = curr;
        curr = curr->next;
    }
    return head;
}
node deletepos(node head, int pos){
    node curr = head;
    node prev = NULL;
    int i = 0;
    while(i < pos){
        prev = curr;
        curr = curr->next;
        i++;
    }
    if(prev == NULL){
        head = curr->next;
    }
    else{
        prev->next = curr->next;
    }
    free(curr);
    return head;
}
void printList(node head){
    node curr = head;
    while(curr != NULL){
        printf("%d ", curr->data);
        curr = curr->next;
    }
    printf("\n");
}
int main(){
    node head = NULL;
    while(1){
        printf("**********MENU**********\n");
        printf("1. Insert Node in the begining\n");
        printf("2. Insert Node at position\n");
        printf("3. Delete Node in the begining\n");
        printf("4. Delete Node at position\n");
        printf("5. Print List\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        int choice;
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("Enter data: ");
                int data;
                scanf("%d", &data);
                head = insertNode(head, data);
                break;
            case 2:
                printf("Enter data: ");
                int data1;
                scanf("%d", &data1);
                printf("Enter position: ");
                int pos;
                scanf("%d", &pos);
                head = insertpos(head, data1, pos);
                break;
            case 3:
                printf("Enter data: ");
                int data2;
                scanf("%d", &data2);
                head = deleteNode(head, data2);
                break;
            case 4:
                printf("Enter position: ");
                int pos1;
                scanf("%d", &pos1);
                head = deletepos(head, pos1);
                break;
            case 5:
                printList(head);
                break;
            case 6:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
}