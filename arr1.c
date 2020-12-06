#include<stdio.h>
void swap(&a ,&b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
void main()
{
    int a=10;
    int b=20;
    swap(x,y);

printf("%d%d",a,b);
}
