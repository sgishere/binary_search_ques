#include<stdio.h>
int main()
{
    static int a[]={10,80,70,30,50};
    static int*p[]={a,a+1,a+4,a+3,a+2};
    int **ptr=p;
    ptr++;
    printf("%d%d",ptr-p,**ptr);
    return 0;
}