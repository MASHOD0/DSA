#include<stdio.h>
#define STACK_SIZE 10
int s[STACK_SIZE];
int top = -1;

void push(){
    int n;
    if (top == STACK_SIZE -1){
        printf("\n Stack Overflow \n");
    }else{
        printf("Enter the data to be pushed\n");
        scanf("%d", &n);
        s[++top]=n;
    }
}
void pop(){
    if(top == -1){
        printf("\n Stack Underflow");
    }else{
        printf("The popped element is: %d",s[top]);
        top --;
    }
}
void display(){
    if (top == -1){
        printf("\n Stack Empty\n");
    }else{
        printf("\n Stack elements are \n");
        for(int i = 0; i <= 0; i++)
            printf("%d\n", s[top - i]);
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