/* Create a program to merge two arrays by inserting one array into another. */

#include <stdio.h>
int main() {
    int arr1[]={1,2,3,4},arr2[]={5,6,7,8},i,j,merge[20];
    for(i=0;i<4;i++)
    merge[i]=arr1[i];
    for(j=0;j<4;j++)
    merge[i+j]=arr2[j];
    int n=i+j;
    for(i=0;i<n;i++)
    printf("%d ",merge[i]);

    return 0;
}
