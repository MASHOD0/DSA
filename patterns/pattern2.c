// ****1
// **1 2 1
// 1 2 3 2 1 
#include<stdio.h>
int main(void){
    for(int i = 1; i < 4; i++){
        int j;

        for(int k = 1; k <= 3 - i; k++){
            printf("  ");
        }
        for(j = 1;j <= i; j++){
            printf("%d ", j);
        }
        
        for(j=i - 1;j >= 1; j--){
            printf("%d ", j);
        }
        printf("\n");
    }
}