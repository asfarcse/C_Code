#include<stdio.h>
int fib(int n)
{
    if(n==1 || n==0)
        {
            return n;
        }

        return fib(n-1)+fib(n-2);
}
int main()
{
    int res,n;
    printf("Enter the number:");
    scanf("%d",&n);
    res=fib(n);
    printf("%d",res);
    return 0;
}
