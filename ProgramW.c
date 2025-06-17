/*  Write a program to find all prime numbers in an unsorted 1D array and count them. For example:
Input:
arr[] = {10, 11, 12, 13, 14, 15, 17, 18, 19}
Output:
Prime numbers: 11, 13, 17, 19
Total number of primes: 4  */

#include <stdio.h>
int main() {
    int arr[10]={10,11,12,13,14,15,17,18,19},i,j,count=0,flag;
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
            count++;
            printf("%d ",arr[i]);
        }
    }
   printf("\nTotal number of primes ;%d",count);
    return 0;
}
