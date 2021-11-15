#include<stdio.h>

int main(void){
    // program to find if a system is big endian or little endian
    int a[16];
    if((int)&a[0] < (int)&a[7]){
        printf("Little Endian");
    }
    else{
        printf("Big Endian");
    }

}