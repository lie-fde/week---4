/* Write a program to reverse a 1D array using only one swap operation. For example:
Input:
arr = {8, 4, 7, 2}
Output:
arr = {2, 7, 4, 8}   */

#include <stdio.h>
int main() {
    int arr[]={8,4,7,2},i,j,temp;
    int size= sizeof(arr)/sizeof(arr[0]);
    int left=0;
    int right=size-1;
    while(left<right)
    {
        temp=arr[left];
        arr[left]=arr[right];
        arr[right]=temp;
        left++;
        right--;
    }
    for(i=0;i<size;i++)
    printf("%d ",arr[i]);
    return 0;
}
