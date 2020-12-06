#include<stdio.h>
void main()
{
    int sum=0,i,s,n;
    int a[]={1,2,3,4,5,6,8,9,10,11,12};
    for(i=0;i<11;i++)
    {
        sum=sum+a[i];
    }
    s=n*(n+1)/2;
    printf("Missing number is %d ",s-sum);
    printf("%d ",sum);
}
