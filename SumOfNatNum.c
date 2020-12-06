#include<stdio.h>
int sum(int n)
{
    if(n>0)
    {
        return sum(n-1)+n;
    }
    return 0;
}
int main()
{
    int res,n;
    printf("First N Natural Number's Sum:");
    scanf("%d",&n);
    res=sum(n);
    printf("%d",res);
    return 0;
}
