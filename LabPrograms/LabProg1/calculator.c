#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define STACK_SIZE 10

void push (char stack[STACK_SIZE], int *top, char ch){
    if(*top == STACK_SIZE - 1){
        printf("stack overflow");
    }else{
        *top = *top + 1;
        stack[*top] = ch;
    }
}

void pop(int *top){
    *top = *top - 1;
}

void main(){
    char stack[STACK_SIZE], string[STACK_SIZE], ch;
    int top = -1;
    printf("Enter the expression\n");
    scanf("%s", string);
    push(stack, &top, '#');
    for (int i = 0; i < strlen(string); i++){
        ch = string[i];
        if(ch == '(')
            push(stack, &top, ch);
        if(ch == ')'){
            if (stack[top] == '#'){
                printf("Invalid String\n");
                return;
            }else{
                pop(&top);
            }
        }
    }
    if (stack[top] == '#'){
        printf("Paranethesis are balanced");
        return;
    }else{
        printf("Invalid String\n");
    }
}