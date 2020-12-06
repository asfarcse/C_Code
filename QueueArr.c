#include<stdio.h>
#include<stdlib.h>
struct Queue
{
    int size;
    int f;
    int r;
    int *Q;
};
void create(struct Queue *q,int size)
{
    q->size=size;
    q->f=q->r=-1;
    q->Q=(int *)malloc(q->size*sizeof(int));
}
void enqueue(struct Queue *q,int x)
{
    if(q->r==q->size-1)
        printf("Queue is full\n");
    else
    {
        q->r++;
        q->Q[q->r]=x;
    }
}
int dequeue(struct Queue *q)
{
    int x=-1;
    if(q->r==q->f)
        printf("Queue is Empty");
    else
    {
        q->f++;
        x=q->Q[q->f];
    }
    return x;
}
void disp(struct Queue q)
{
    int i;
    for(i=q.f+1;i<=q.r;i++)
        printf("%d ",q.Q[i]);
    printf("\n");
}
int main()
{
    struct Queue q;
    create(&q,5);
    enqueue(&q,10);
    enqueue(&q,20);
    enqueue(&q,30);
    enqueue(&q,40);
    disp(q);
    printf("%d\n",dequeue(&q));
    disp(q);

    return 0;
}
