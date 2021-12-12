#include<stdio.h>

int main(void){
    int a, b;
    printf("Enter the sizes of array a and b:\n");
    scanf("%d %d", &a, &b);
    int c = a+b;
    int arr1[a], arr2[b], arr3[c];

    printf("enter elements of a:\n");
    for(int i = 0; i < a; i++)
        scanf("%d",&arr1[i]);
    printf("enter the elements of b:\n");
    for(int i = 0; i < b; i++)
        scanf("%d",&arr2[i]);

    
    int k = 0;
    for(int i = 0; i < a; i++){
        arr3[k++] = arr1[i];
    }
    
    // for(int i = 0; i < b; i++){
    //     arr3[k++] = arr1[i];
    // }
    
    for(int i = 0; i < b; i++){
        int flag = 1;
        int num = arr2[i];
        for(int j = 0; j < a; j++){
            if (num == arr1[j]){
                flag = 0;
            }
        }
        while(flag){
            arr3[k++] = num;
        }

    }
    printf("the output array :\n");
    for(int i = 0; i < k; i++)
        printf("%d \n", arr3[i]);
}