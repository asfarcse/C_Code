#include<stdio.h>
int fact(int n)
{
    int s=1,i;
    if(n==0)
        printf(1);
    else
    for(i=1;i<=n;i++)
        s=s*i;
    printf("%d",s);
}
int main()
{

    fact(0);
    return 0;
}
