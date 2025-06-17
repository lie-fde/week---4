/*  Write a program to reverse an array and insert a new element in the middle.
Input:
Array: {4, 7, 9, 1}
Element to insert: 6
Output:
{1, 9, 6, 7, 4}  */

#include <stdio.h>
int main() {
    int arr[10]={4,7,9,1},i,j,temp,value;
    int size= 4;
    printf("Enter the element to insert:");
    scanf("%d",&value);
    int pos=2;
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
    for(i=size;i>pos;i--)
    arr[i]=arr[i-1];
    arr[pos]=value;
    size++;
    for(i=0;i<size;i++)
    printf("%d ",arr[i]);
    return 0;
}
