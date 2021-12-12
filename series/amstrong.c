#include<stdio.h>
#include<math.h>
int main(void){
    int amstrong = 0;
    for(int i = 1 ; i <= 100; i++){
        int r, n, sum, arr[3];
        int num = i;
        while(n < 0){
            int j = 0;
            r = num % 10;
            arr[j] = r;
            num = num / 10;
            printf("%d \n", r);
        }
        for (int k = 0 ; k < 2; k++){
            sum += pow(arr[k], 3);
        }
        if(sum == i)
        amstrong++;
    }
    printf(" the number of amstrong numbers: %d", amstrong);
    return 0;
}