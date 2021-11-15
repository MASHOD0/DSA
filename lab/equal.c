#include <stdio.h>

int main(void){
    // program to print if 2 numbers are equal without using ==
    int a = 10;
    int b = 10;

    if(a & (~b)==0){
        printf("%d and %d are equal",a,b);
    }
    else{
        printf("%d and %d are not equal",a,b);
    }

}