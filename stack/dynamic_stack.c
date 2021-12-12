#include<stdio.h>
#include <stdlib.h>
#include<conio.h>

void push();
void pop();
void display();

int *ptr, i, ch, c=0;

int main(){
    void push(){
        if(ptr == NULL){
            c++;
            ptr =(int*) malloc(c*sizeof(int));
            printf("Enter the element to insert");
            scanf("%d", ptr+c);
        }else{
            //printf("Enter the element to insert");
            c++;
            ptr = (int*) realloc(ptr, c);
            printf("Enter the element to insert");
            scanf("%d", ptr+c);
        }
    }
}