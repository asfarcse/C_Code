#include<stdio.h>
struct Rectangle
{
    int length;
    int breadth;
};
void init(struct Rectangle *r,int l,int b)
{
    r->length=l;
    r->breadth=b;
}
int area(struct Rectangle r)
{
    return r.length*r.breadth;
}
void chLen(struct Rectangle *r,int l)
{
    r->length=l;
}
int main()
{
    struct Rectangle r;
    int a;
    init(&r,10,5);
    a=area(r);
    printf("%d",a);
    chLen(&r,20);
     a=area(r);
    printf("%d",a);
    return 0;
}