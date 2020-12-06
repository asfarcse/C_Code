#include<stdio.h>
struct Array
{
    int A[10];
    int size;
    int length;
};
void display(struct Array arr)
{
    int i;
    printf("\n Elements Are::\n");
    for(i=0;i<arr.length;i++)
        printf("%d ",arr.A[i]);
}
int Bsearch(struct Array arr,int key)
{
    int l,mid,h;
    l=0;
    h=arr.length-1;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(key==arr.A[mid])
            return mid;
        else if(key<arr.A[mid])
            h=mid-1;
        else
            l=mid+1;
    }
    return -1;
}
int main()
{
    struct Array arr={{2,3,4,5,6},10,5};
    printf("%d ",Bsearch(arr,6));
    display(arr);
    return 0;
}
