#include<stdio.h>
int add()
{
    int x,y;
    scanf("%d%d",&x,&y);

    return x+y;
}
void main()
{
    int res;
    res=add();
    printf("%d ",res);

}
