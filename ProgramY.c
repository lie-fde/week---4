/*  Write a program to find the smallest prime number in an unsorted 1D array. If no prime exists, return a message. For example:
Input:
arr[] = {8, 9, 11, 4, 15, 18}
Output:
Smallest prime number is: 11  */

#include <stdio.h>
#include<limits.h>
int main() {
    int arr[10]={10,11,12,13,14,15,17,18,19},i,j,min=INT_MAX,flag;
    for(i=0;i<9;i++)
    {
        flag=0;
        for(j=2;j<=arr[i]/2;j++)
        {
            if(arr[i]%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            if(arr[i]<min)
            min=arr[i];
        }
    }
   if(min==INT_MAX)
   printf("No prime number found");
   else
   printf("\nSmallest prime number:%d",min);
    return 0;
}
