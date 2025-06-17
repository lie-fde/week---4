/* Write a program to find both the largest and lowest numbers in an unsorted 1D array. For example:
Input:
arr[] = {32, 4, 71, 9, 55, 13, 19, 72}
Output:
Largest number: 72
Lowest number: 4  */

#include <stdio.h>
#include <limits.h>
int main() {
    int arr[]={32,4,71,9,55,13,19,72},i,j,count=0,max=INT_MIN ,min=INT_MAX;
    for(i=0;i<8;i++)
    {
        if(arr[i]>max)
        max=arr[i];
        if(arr[i]<min)
        min=arr[i];
    }
    printf("Largest number:%d",max);
    printf("\nSmallest number:%d",min);
    return 0;
}
