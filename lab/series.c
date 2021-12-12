#include<stdio.h>
#include<math.h>

int main(void){
    int n;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    double i, s = 0.0;
    for (i = 1; i <= n; i++)
        s = s + 1/i;
    printf("the sum is %f \n", s);
}