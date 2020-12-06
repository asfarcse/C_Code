#include<stdio.h>
int pwr(int m,int n)
{
    if(n==0)
        return 1;
    else
        return pwr(m,n-1)*m;
}
int main()
{
    printf("%d",pwr(2,3));
    return 0;
}
