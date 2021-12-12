/* sparse matrix implemenatation in c*/
#include <stdio.h>
#include<stdlib.h>

void main(){
struct stud
{
int row;
int col;
int val;
}st[10];
int mat[5][5l];
int i,j,nzero=0,mr,mc,s,elem;

printf("Enter number of rows & columns : \n");
scanf("%d%d",&mr,&mc);
printf("Enter the Matrix : ");
for(i=0;i<mr;i++)
for(j=0;j<mc;j++){
scanf("%d",&mat[i][j]);
if(mat[i][j]!=0) nzero++;

}
st[0].row=mr;
st[0].col=mc;
st[0].val=nzero;
s=1;
for(i=0;i<mr;i++)
for(j=0;j<mc;j++)
if(mat[i][j]!=0){
st[s].row=i+1;
st[s].col=j+1;
st[s].val=mat[i][j];
s++;
}
printf("Sparse matrix is :\n");
for(i=0;i<=nzero;i++){
printf("%5d%5d%5d\n",st[i].row,st[i].col,st[i].val);
}
printf("Enter the elment to be searched: ");
scanf("%d",&elem);
for(i=1;i<=st[0].val;i++)
if(st[i].val==elem){
printf("Element found at (row, col):(%d, %d)=%d",st[i].row,st[i].col,elem);
exit(0);
}
printf("Element not found");
}