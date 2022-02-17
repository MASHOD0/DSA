#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node *link;
};
typedef struct node *NODE;
NODE insertLoc(NODE first){
    int loc, count;
    NODE temp, cur;
    printf("\n Enter the location \n");
    scanf("%d", &loc);
    temp = (NODE)malloc(sizeof(struct node));
    printf("Enter the data\n");
    scanf("%d", &temp->info);
    temp->link = NULL;

    if(first == NULL){ // base case
        if(loc == 1)
           first = temp;
        else
            printf("invalid location\n");
    }else if (loc == 1){ //edge case
        temp->link = first;
        first = temp;
    }else{
        cur = first;
        count = 1;
        while(cur != NULL){
            if (count == loc - 1){
                temp -> link = cur -> link;
                cur -> link = temp;
                break;
            }
            cur = cur ->link;
            count ++;
        }
        if (cur == NULL){
            printf("invalid location\n");
        }
        return first;
    }
}
NODE delete  (NODE first){
    NODE temp;
    if (first == NULL){
        printf("List empty\n");
    }
    else{
        temp = first;
        first = first -> link;
        free(temp);
        return first;
    }
}
void display(NODE first){
    NODE cur;
    if(first == NULL){
        printf("List empty\n");
    }
    else{
        cur = first;
        printf("contents of the list are...\n");
        while(cur != NULL){
            printf("%d\n", cur->info);
            cur = cur -> link;
        }
    }
}
int main(){
    int ch;
    NODE first = NULL;
    for(;;){
        printf("1. Insert 2.Delete 3. Display 4. Exit\n");
        printf("Enter your choice\n");
        scanf("%d", &ch);
        switch(ch){
        
        case 1: first = insertLoc(first);
                break;
        case 2: first = delete(first);
                break;
        case 3: display(first);
                break;
        default: exit(0);
    }
    }
}