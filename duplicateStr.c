#include<stdio.h>
int main()
{
    char A[20];
    printf("Enter the string\n");
    scanf("%s",A);
    int i,j,count;
    for(i=0;A[i]!='\0';i++)
    {
        count=1;
        for(j=i+1;A[j]!='\0';j++)
        {
            if(A[i]==A[j])
            {
                count++;
                A[j]=0;
            }
        }
        if(count>1)
        {
           printf("%c occur %d times\n",A[i],count);
        }
    }
}
