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
void printListReverse(node head){
    if(head == NULL){
        return;
    }
    printListReverse(head->next);
    printf("%d ", head->data);
}
void bubble_sort(node head){
    printf("bubble sort\n");
    node curr = head;
    while(curr != NULL){
        node next = curr->next;
        while(next != NULL){
            if(curr->data > next->data){
                int temp = curr->data;
                curr->data = next->data;
                next->data = temp;
            }
            next = next->next;
        }
        curr = curr->next;
    }
}
void selection_sort(node head){
    printf("selection sort\n");
    node curr = head;
    while(curr != NULL){
        node min = curr;
        node next = curr->next;
        while(next != NULL){
            if(next->data < min->data){
                min = next;
            }
            next = next->next;
        }
        int temp = curr->data;
        curr->data = min->data;
        min->data = temp;
        curr = curr->next;
    }
}
void merge_sort(node head){
    printf("merge sort\n");
    node curr = head;
    while(curr != NULL){
        node next = curr->next;
        while(next != NULL){
            if(curr->data > next->data){
                int temp = curr->data;
                curr->data = next->data;
                next->data = temp;
            }
            next = next->next;
        }
        curr = curr->next;
    }
}
void quick_sort(node head){
    printf("quick sort \n");
    node curr = head;
    while(curr != NULL){
        node next = curr->next;
        while(next != NULL){
            if(curr->data > next->data){
                int temp = curr->data;
                curr->data = next->data;
                next->data = temp;
            }
            next = next->next;
        }
        curr = curr->next;
    }
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
        printf("6. Print List in Reverse\n");
        printf("7. Bubble Sort\n");
        printf("8. Selection Sort\n");
        printf("9. Merge Sort\n");
        printf("10. Quick Sort\n");
        printf("11. Print reverse of list\n");
        printf("12. Exit\n");
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
                printListReverse(head);
                break;
            case 7:
                bubble_sort(head);
                printList(head);
                break;
            case 8:
                selection_sort(head);
                printList(head);
                break;
            case 9:
                merge_sort(head);
                printList(head);
                break;
            case 10:
                quick_sort(head);
                printList(head);
                break;
            case 11:
                printListReverse(head);
            case 12:
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }
}