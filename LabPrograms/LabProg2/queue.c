#include<stdio.h>
#define QUEUE_SIZE 10
int s[QUEUE_SIZE];
int front = 0, rear = -1;

void push(){
    int n;
    if (rear == QUEUE_SIZE -1){
        printf("\n Queue Overflow \n");
    }else{
        printf("Enter the data to be pushed\n");
        scanf("%d", &n);
        s[++rear]=n;
    }
}
void pop(){
    if(front > rear){
        printf("\n Queue Underflow \n");
    }else{
        printf("The popped element is: %d",s[front++]);
        
        if (front > rear && rear == QUEUE_SIZE - 1){
            printf("Reinit\n");
            front = 0;
            rear = -1;
        }
    }    
}

void display(){
    if (front > rear){
        printf("\n Queue Empty\n");
    }else{
        printf("\n Queue elements are \n");
        for(int i = front; i <= rear; i++)
            printf("%d\n", s[i]);
    }
}
int main(){
    int ch;
    for(;;){
        printf("\n 1. PUSH \t 2. POP \t 3. DISPLAY \t  4. EXIT\n");
        printf("\n Enter your choice\n");
        scanf("%d", &ch);
        switch(ch){
            case 1:push(); break;

            case 2:pop(); break;

            case 3:display(); break;

            case 4: return 0;

            default:printf("\n Invalid Choice\n");

        }
    }
}