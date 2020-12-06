#include<stdio.h>
char palind(char A[])
{
    char B[15];
    int i,j;
    for(i=0;A[i]!='\0';i++)
    {
    }
    i=i-1;
    for(j=0;i>=0;i--,j++)
    {
        B[j]=A[i];
    }
    B[j]='\0';

    if(A[i]==B[j])
    {
        printf("Palindrome\n");
    }
    else
        printf("Not Plaindrom\n");
    printf("%s\n",B);
    printf("%s\n",A);

}
int main()
{
    char A[15];
    printf("enter a string\n");
    scanf("%s",A);
    printf("%s",(palind(A)));
    return 0;
}
