// #include<stdio.h>

// int main(void){
//     // program to find if a system is big endian or little endian
//     int a[16];
//     if(((int)&a[0]) < ((int)&a[7])){
//         printf("Little Endian");
//     }
//     else{
//         printf("Big Endian");
//     }

// }
#include <stdio.h>
int main ()
{
  unsigned int x = 0x76543210;
  char c = (char) &x;
 
  printf ("*c is: 0x%x\n", *c);
  if (*c == 0x10)
  {
    printf ("Underlying architecture is little endian. \n");
  }
  else
  {
     printf ("Underlying architecture is big endian. \n");
  }
 
  return 0;
}