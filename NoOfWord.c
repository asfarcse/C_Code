#include<stdio.h>
int main()
{
    char A[]="How are you       sweetheart";
    int i,word=0;
    for(i=0;A[i]!='\0';i++)
    {
        if(A[i]==' ' && A[i-1]!=' ')
        {
            word++;
        }
    }
    printf("number of word is %d ",word+1);
    return 0;
}
