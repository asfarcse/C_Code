#include<stdio.h>
int main()
{
    char A[15];
    printf("Enter the string\n");
    scanf("%s",A);
    int i,j;
    char t;
    for(j=0;A[j]!='\0';j++)
    {
    }
    j=j-1;
    for(i=0;i<j;i++,j--)
    {
        if(A[i]!=A[j])
        {
            printf("Not palindrome");
            break;
        }
        else
            printf("palindrome");
            break;
    }
    return 0;
}
