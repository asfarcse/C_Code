#include<stdio.h>
#include<stdlib.h>
struct Rectangle
{
    int l;
    int b;
};
int main()
{
    struct Rectangle *p,*q;
    p=(struct Rectangle*)malloc(sizeof(struct Rectangle));
    q=(struct Rectangle*)malloc(sizeof(struct Rectangle));
    p->l=10;
    p->b=5;
    q->l=20;
    q->b=25;
    printf("%d ",p->l);
    printf("%d ",p->b);

    printf("\n\n\n");

    printf("%d ",q->l);
    printf("%d ",q->b);
}
