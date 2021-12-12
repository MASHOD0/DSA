#include<stdio.h>
#include<stdlib.h>


#define SIZE 5

void deqinsertr(int, int*, int []);
void deqdeletef(int *, int *, int []);
void deqinsf(int *, int []);
void deqdelr(int*, int []);
void deqdisplay (int,int, int []);

void main(){
    int deq[SIZE], rear= -1, front =0, item ,ch;
    printf("hello world");

    while(1){
        printf ("\n 1: INSERT at Rear 2:DELETE from Front");
        printf(" 3:Insert at Front 4: Delete at rear 5:DISPLAY Otherwise EXIT\n");
        scanf ("%d", &ch);

        switch (ch){

            case 1: printf ("Enter the element \n");
                    scanf ("%d", &item);
                    deqinsertr(item, &rear,deq); 
                    break;

            case 2: deqdeletef(&rear,&front, deq); 
                    break;

            case 3: deqinsf(&front,deq); 
                    break;

            case 4: deqdelr(&rear,deq); 
                    break;

            case 5: deqdisplay(front,rear,deq);
                    break;

            default: printf ("Invalid operation");
            // getch();
            exit (0);

        }
    }
} 
void deqdelr(int *rear, int deq[]){
    if (*rear == -1){
        printf ("Queue is empty");
        return;
    }
    else{
        printf ("Deleted element is %d", deq[*rear]);
        *rear = *rear - 1;
    }
}

void deqinsertr(int item, int *rear, int deq[]){
    if (*rear == SIZE - 1){
        printf ("Queue is full");
        return;
    }
    else{
        *rear = *rear + 1;
        deq[*rear] = item;
    }
}

void deqdeletef( int *rear, int *front, int deq[]){

    if(*front >*rear )
        printf ("Queue is Empty");

    else{
        printf("The deleted element is %d", deq[*front]);
        *front = *front +1;
    }
}
void deqinsf(int *front, int deq[]){
    int element;
    if(*front==0)
        printf("Queue is full");
    else {
        *front = *front -1;
        printf("Enter the element to be inserted");
        scanf("%d",&element);
        deq[*front]=element;
    }
}
void deqdisplay( int front, int rear, int deq[]){
    int i;
    if(front > rear)
        printf ("Queue is Empty");
    else
    {
        printf ("The status of Queue \n");
        for(i= front ; i<=rear ;i++)
           printf ("Queue[%d]=%d\n",i, deq[i]);
    }
}