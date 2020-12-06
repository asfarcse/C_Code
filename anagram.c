#include<stdio.h>
int main()
{
    char A[15],B[15];
    char H[26]={0};
    printf("Enter string 1\n\n");
    scanf("%s",A);
    printf("Enter string 2\n\n");
    scanf("%s",B);
    int i;
    for(i=0;A[i]!='\0';i++)
    {
        H[A[i]-97]++;
    }
    for(i=0;B[i]!='\0';i++)
    {
        H[A[i]-97]--;

    if(H[A[i]-97]<0)
    {
        printf("Not Anagram");
        break;
    }
    }
    if(B[i]=='\0')
        printf("Anagram");
    return 0;

}


