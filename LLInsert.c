#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
}*first=NULL;
/*void create(int A[],int n)
{
    int i;
    struct Node *t,*last;
    first=(struct Node*)malloc(sizeof(struct Node));
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
}*/
void disp(struct Node *p)
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
void insert(struct Node *p,int index ,int x)
{
    struct Node *t;
    int i;
    if(index<0 || index>count(p))
        return;
    t=(struct Node*)malloc(sizeof(struct Node));
    t->data=x;

    if(index==0)
    {
        t->next=first;
        first=t;
    }
    else
    {
        for(i=0;i<index-1;i++)
            p=p->next;
        t->next=p->next;
        p->next=t;
    }
}
int main()
{
    insert(first,0,5);
    insert(first,1,6);
    insert(first,2,7);
    insert(first,0,10);
    disp(first);
    return 0;
}
