#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,s,*A;
    int counteven=0,countodd=0;
    printf("Enter the array size\n");
    scanf("%d",&s);
    A=(int *)malloc(sizeof(s));
    printf("Enter elements");
    for(i=0;i<s;i++)
    {
        scanf("%d ",&A[i]);
    }
    printf("Entered elements is:");
    for(i=0;i<s;i++)
        printf("%d ",A[i]);

    for(i=0;i<s;i++)
        if(A[i]%2==0)
        counteven++;
    else
        countodd++;

    printf("%d ",counteven);
    printf("%d ",countodd);
    return 0;

}
