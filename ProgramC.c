/* Insert multiple elements at alternate positions in an array. */

#include <stdio.h>
int main() {
    int arr1[20]={1,2,3,4,5},arr2[]={6,7,8},i,j=1;
    int size2=3,size=5,temp,k;
    for(i=0;i<size2;i++)
    {
        temp=arr2[i];
        for(k=size;k>j;k--)
        arr1[k]=arr1[k-1];
        arr1[j]=temp;
        size++;
        j+=2;
    }
    for(i=0;i<size;i++)
    printf("%d ",arr1[i]);
    return 0;
}
