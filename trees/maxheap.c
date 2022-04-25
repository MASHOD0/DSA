#include<stdio.h>
#include<time.h>
void hSort(int a[], int n){
    int i, t;
    heapify(a, n);
    for (i = n; i >= 2; i--){
        t = a[i];
        a[i] = a[1];
        a[1] = t;
        adjust(a, 1, i-1);
    }
}
void hepify(int a[], int n){
    int i;
    for (i = n/2; i >= 1; i --){
        adjust(a, i, n);
    }
}
void adjust(int a[], int i, int n){
    int j, v, heap, k;
    v = a[k];
    k = i;
    heap = 0;
    while (!heap && 2*k<=n){
        j = 2*k;
        if(j < n){
            if(a)
        }
    }
}