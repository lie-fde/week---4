/* Create a program to insert elements in reverse order (new elements get added at the start). */

#include <stdio.h>
int main()
{
    int arr2[10],i,j,size=0,arr1[]={1,2,3,4,5},temp;
    for(i=0;i<5;i++)
    {
        temp=arr1[i];
        for(j=size;j>0;j--)
        arr2[j]=arr2[j-1];
        arr2[0]=temp;
        size++;
    }
    for(i=0;i<size;i++)
    printf("%d ",arr2[i]);
}
