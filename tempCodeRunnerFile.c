/* Implementing the bubble sort algorithm in C */
#include <stdio.h>

int main(void){
    int i, j, n, temp, flag = 1;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    while(flag){
        flag = 0;
        for(i = 0; i < n - 1; i++){
            if(a[i] > a[i + 1]){
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
                flag = 1;
            }
        }
    }
    printf("The sorted array is: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}