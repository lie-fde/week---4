/* Shift all elements and insert a new element after every even number in the array. */

#include <stdio.h>
int main()
{
    int arr[10]={1,2,2,4,5},i,j,size=5,index;
    int a=7;
    for(i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            index=i+1;
            for(j=size;j>index;j--)
            arr[j]=arr[j-1];
            arr[index]=a;
            size++;
        }
    }
    for(i=0;i<size;i++)
    printf("%d ",arr[i]);
}
