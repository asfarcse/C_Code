#include<stdio.h>
int main()
{
    int a1[20],a2[20],u[40],i,j,k,n,m;
    printf("Enter the size of first Array");
    scanf("%d",&n);
    printf("Enter the element for first array in ascending order:");
    for(i=0;i<n;i++)
        scanf("%d ",&a1[i]);
    printf("Enter the size of second Array");
    scanf("%d",&m);
    printf("Enter the element for second array in ascending order:");
    for(i=0;i<m;i++)
        scanf("%d ",&a2[j]);
    for(i=0,j=0,k=0;i<m && j<m;)
        if(a1[i]<a2[j])
    {
        u[k]=a1[i];
        i++;
        k++;
    }
    else
        if(a1[i]>a2[j])
    {
        u[k]=a2[j];
        j++;
        k++;
    }
    else
    {
        u[k]=a1[i];
        i++;
        j++;
        k++;
    }

if(i<n)
{
    for(;i<n;i++)
    {
        u[k]=a1[i];
        k++;
    }
}
else if(j<m)
{
    for(;j<m;j++)
    {
        u[k]=a2[j];
        k++;
    }
}
printf("Union of two arrays is:\n");
for(i=0;i<k;i++)
{
    printf("%d ",u[i]);
}
}



