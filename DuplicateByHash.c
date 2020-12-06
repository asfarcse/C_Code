#include<stdio.h>
int main()
{
    char A[20];
    char H[26]={0,0};
    printf("Enter string\n\n");
    scanf("%s",A);
    int i;
    for(i=0;A[i]!='\0';i++)
    {
        H[A[i]-97]++;
    }
    for(i=0;i<26;i++)
    {
        if(H[i]>1)
        {
            printf("%c repeats %d times\n",i+97,H[i]);
        }
    }
    return 0;
}
