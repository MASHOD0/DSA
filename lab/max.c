#include<stdio.h>
#include<math.h>


int main(void){
    int in[8];
    printf("enter the 8 bit binary value:");
    for(int i=0;i<8;i++){
        scanf("%d",&in[i]);
    }
    for(int i=0;i<8;i++){
        if(in[i]==1){
            in[i]= ~in[i];
        }
        else if(in[i]==0){
            in[i]=1;
        }
    }
    for(int i=0;i<8;i++){
        printf("%d",in[i]);
    }
}