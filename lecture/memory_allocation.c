// single quotes - > char
// double quotes - > string

#include<stdio.h>

int main() {
  int x = 5;
  int *p = &x;
  *p = 3;
  printf( "%d\n", x);
  return 0;
}