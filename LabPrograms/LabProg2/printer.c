#include<stdio.h>

#define SIZE 10
void insert(int cq[SIZE], int *rear, int item, int *count){
    *rear = (*rear + 1)%SIZE;
    cq[*rear] = item;
    *count = *count + 1;
}

void deletion(int cq[SIZE], int *front, int *count){
    if(*count == 0)
        printf("No Job in Print Spool\n");
    else{
        printf("%d is Exits Print Spool\n", cq[*front]);
        *front = (*front + 1) % SIZE;
        *count = *count - 1;
    }

}
void display(int cq[SIZE], int front, int count){
    int i, j;
    if(count == 0)
        printf("Print spool is Empty\n");
    else{
        printf("Content of Prnt Spool\n");
        j = front;
        for(int i = 1; i <= count; i++){
            printf("%d is printing\n",cq[j]);
            j = (j+1)%SIZE;
        }
    }
}

int main(){
    int ch, cq[SIZE], rear= -1, count = 0, front = 0, item;
    for(;;){
        printf("\n 1. PUSH \t 2. POP \t 3. DISPLAY \t  4. EXIT\n");
        printf("\n Enter your choice\n");
        scanf("%d", &ch);
        switch(ch){
            case 1:printf("Enter the Print job in spool\n"); 
                    scanf("%d", &item);
                    insert(cq, &rear, item, &count);
                    break;

            case 2:deletion(cq, &front, &count);
                    break;

            case 3:display(cq, front, count); 
                    break;

            case 4: return 0;

            default:printf("\n Invalid Choice\n");

        }
    }
}