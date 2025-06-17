/*  Write a program to find the largest prime number in an unsorted 1D array. If no prime exists, return a message. 
Input:
arr[] = {8, 10, 23, 45, 2, 67}
Output:
Largest prime number is: 67  */   

#include <stdio.h>
#include<limits.h>
int main() {
    int arr[10]={8, 10, 23, 45, 2, 67},i,j,max=INT_MIN,flag;
    for(i=0;i<6;i++)
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
            if(arr[i]>max)
            max=arr[i];
        }
    }
   if(max==INT_MIN)
   printf("No prime number found");
   else
   printf("\nLargest prime number:%d",max);
    return 0;
}
