/* implementing selection sort in C*/
#include <stdio.h>

int main(void){
    //selection sort
    int array[5] = {4, 3, 2, 1, 0};
    int i, j, min_index, temp;
    for(i = 0; i < 5; i++){
        min_index = i;
        for(j = i + 1; j < 5; j++){
            if(array[j] < array[min_index]){
                min_index = j;
            }
        }
        temp = array[i];
        array[i] = array[min_index];
        array[min_index] = temp;
    }
    for(i = 0; i < 5; i++){
        printf("%d ", array[i]);
    }
}