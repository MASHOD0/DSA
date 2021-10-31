#include<stdio.h>
#include<ctype.h>
// prototypes

int main(void){
    //implement a stack using an integer array
    //the stack is implemented using a fixed size array
    int stack[10];
    int top = -1;
    int choice;
            do{
        printf("1: push\n");
        printf("2: pop\n");
        printf("3: peek\n");
        printf("4: display\n");
        printf("5: exit\n");
        printf("enter your choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("enter the value to be pushed: ");
                scanf("%d", &stack[++top]);
                break;
            case 2:
                printf("popped %d\n", stack[top--]);
                break;
            case 3:
                printf("the top is %d\n", stack[top]);
                break;
            case 4:
                for(int i = 0; i <= top; i++){
                    printf("%d ", stack[i]);
                }
                printf("\n");
                break;
            case 5:
                printf("exiting...\n");
                break;
            default:
                printf("invalid choice\n");
                break;
       }
    
    }while(choice != 5);
}