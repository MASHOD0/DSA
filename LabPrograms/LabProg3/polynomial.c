#include<stdio.h>
#include <stdlib.h>

struct node{
    int c;
    int p;
    struct node *link;
};
typedef struct node *NODE;

NODE getnode(){
    NODE x;
    x = (NODE)malloc(sizeof (struct node));
    if (x == NULL){
        printf("memory full");
        exit(0);
    }
    return x;
}
NODE insertr(int cf, int px, NODE first){
    NODE temp, pres;
    temp = getnode();
    temp->c = cf;
    temp->p = px;
    temp->link = NULL;
    if (first = NULL){
        return temp;
    }
    pres = first;
    while (pres->link != NULL){
        pres = pres->link;
    }
    pres->link = temp;
    return first;
}
NODE readpoly(NODE first){
    int i, n;
    int cf, px;
    printf("Enter the number of Terms\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        printf("Enter the term %d", i+1);
        printf("cf:");
        scanf("%d", &cf);
        printf("\npx:");
        scanf("%d", &px);
        first = insertr(cf, px, first);
    }
    return first;
}

void display(NODE first){
    NODE temp;
    if (first == NULL){
        printf("Polynomial does not exist\n");
        return;
    }
    temp = first;
    while(temp != NULL){
        if(temp ->c < 0)
            printf("%d", temp->c);
        else 
            printf("+%d", temp->c);
        printf("x^%d", temp->p);
        temp = temp -> link;

    }
}

NODE addpoly(NODE poly1, NODE poly2, NODE poly){
    NODE pres_p1 = poly1, pres_p2 = poly2;

    while(pres_p1 != NULL && pres_p2 != NULL){
        if (pres_p1 ->p > pres_p2->p){
            poly = insertr(pres_p1->c,pres_p1->p, poly);
            pres_p1 = pres_p1->link;
        }else if (pres_p1 ->p < pres_p2->p){
            poly = insertr(pres_p2->c,pres_p2->p, poly);
            pres_p2 = pres_p2->link;
        }else{
            poly = insertr(pres_p1->c + pres_p2->c, pres_p1->p , poly);
            pres_p1 = pres_p1->link;
            pres_p2 = pres_p2->link;
        }
    }
    while(pres_p1 != NULL){
            poly = insertr(pres_p1->c,pres_p1->p, poly);
            pres_p1 = pres_p1->link;
        }
    while(pres_p2 != NULL){
        poly = insertr(pres_p2->c,pres_p2->p, poly);
        pres_p2 = pres_p2->link;
    }
    return poly;
}
int main(){
    NODE poly1 = NULL, poly2 = NULL, poly = NULL;
    printf("Enter polynomial 1");
     printf("\n");
    poly1 = readpoly(poly1);
    printf("Enter polynomial 2");
     printf("\n");
    poly2 = readpoly(poly2);
    printf("Polynomial 1=");
    display(poly1);
     printf("\n");
    printf("Polynomial 2=");
    display(poly2);
     printf("\n");
    printf("Result=");
    poly = addpoly(poly1, poly2, poly);
    display(poly);
     printf("\n");
    return 0;

}