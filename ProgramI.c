 /* Write a program to find the missing number in an array of integers where numbers are in a consecutive range (starting from 1). For example:
Input:
arr = {1, 2, 4, 5, 6}
Output:
Missing number = 3 */

#include <stdio.h>
int main() {
   int arr[]={1,2,4,5,6},i,k=1,j,flag=0;
   int n = sizeof(arr)/sizeof(arr[0]);
   for(i=0;i<n;i++)
   {
        if(arr[i]!=k)
        {
            flag=1;
            break;
        }k++;
   }
   if(flag==0)
   printf("No missing number");
   else
   printf("Missing Number : %d ",k);

    return 0;
}
