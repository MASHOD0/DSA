#include <stdio.h>
#define SIZE 10
int main (){
    //implementing an ordinary queue
    int queue[SIZE], front = 0, rear = -1;
    int choice, item;
    while(1){
        printf("Enter: \n1. Enqueue \n2. Dequeue \n3. Display \n4. Exit \n");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                if(rear == SIZE-1){
                    printf("Queue is full\n");
                }
                else{
                    printf("Enter the item to be inserted: ");
                    scanf("%d", &item);
                    rear++;
                    queue[rear] = item;
                }
                break;
            case 2:
                if(front == rear+1){
                    printf("Queue is empty\n");
                }
                else{
                    printf("Deleted item: %d\n", queue[front]);
                    front++;
                }
                break;
            case 3:
                if(front == rear+1){
                    printf("Queue is empty\n");
                }
                else{
                    printf("Queue is: ");
                    for(int i = front; i <= rear; i++){
                        printf("%d ", queue[i]);
                    }
                    printf("\n");
                }
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
}
