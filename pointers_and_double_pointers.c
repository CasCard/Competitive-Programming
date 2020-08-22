//
// Created by abel on 05/07/20.
//
#include<stdio.h>

// p->i and q->j
int f(int x,int *py, int **ppz){
    int y,z;
    printf("%d",**ppz);
    **ppz+=1;
    printf("\n%d",**ppz);
    z=**ppz;
    printf("\n%d",z);
    *py+=2;
    printf("\n%d",*py);
    y=*py;
    printf("\n%d",y);
    printf("\n%d",x);
    x+=3;
    printf("\n%d",x);
    return x+y+z;
}
int i=1,j=1;
int main(){
    int c,*b,**a;
    c=4;
    b=&c;
    a=&b;
    printf("\n%d ",f(c,b,a));
    return 0;
}
