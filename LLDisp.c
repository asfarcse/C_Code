#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
}*first=NULL;

void create(int A[],int n)
{
    int i;
    struct Node *t,*last;
    first=(struct Node *)malloc(sizeof(struct Node));
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(i=1;i<n;i++)
    {
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void disp(struct Node*p)
{
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}
int count(struct Node *p)
{
    if(p==0)
        return 0;
    return count(p->next)+1;
}
int Add(struct Node *p)
{
    int sum=0;
    while(p)
    {
        sum+=p->data;
        p=p->next;
    }
    return sum;
}
int max(struct Node*p)
{
    int m=-32768;
    while(p)
    {
        if(p->data>m)
            m=p->data;
            p=p->next;
    }
    return m;
}
int main()
{
    int A[]={3,5,7,10,25,8,32,2,55};
    create(A,9);
    disp(first);
    printf("\n\n");
    printf(" count is %d \n",count(first));
    printf("Sum is %d \n",Add(first));
    printf("max is %d ",max(first));
    return 0;
}
