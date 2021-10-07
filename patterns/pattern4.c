// ****1
// **2 3 2
// 3 4 5 4 3
// **2 3 2
// ****1
#include<stdio.h>
int main(void){
    int i, j, l = 0;
    // printing the top pyramid
    for(i = 1; i < 4; i++){
        // printing the spaces
        for(int k = 1; k <= 3 - i; k++)
            printf("  ");
        // printing the top left triangle
        for(j = 1;j <= i; j++){
            l++;
            printf("%d ", l);   
        }
        // printing  top right triangle
        for(j = i -1; j >= 1; j--){
            l--;
            printf("%d ", l);    
        }
        printf("\n");
    }
    // printing the bottom pyramid
    for(i = 1; i < 3; i++){
        l--;
        // printing the spaces
        for(int k = i ; k > 0; k--)
            printf("  ");
        // printing the bottom left triangle
        for(j = 3 - i; j > 0; j--){
            printf("%d ", l); 
            l++;  
        }
        l--;
        // printing the bottom right triangle
        for(j = i; j <= 1; j++){
            l--;
            printf("%d ", l);
            
        }
        printf("\n");
    }
    return 0;
}