/*  Write a program to check if an array is the same when read forwards and backwards. For example:
Input:
arr = {1, 2, 3, 2, 1}
Output:
Yes, it is Palindromic
 */

#include <stdio.h>
int main() {
   int arr[]={1,2,3,2,1},i,flag=0;
   int n = sizeof(arr)/sizeof(arr[0]);
   for(i=0;i<n/2;i++)
   {
       if(arr[i]!=arr[n-1-i])
       {
           flag=1;
           break;
       }
   }
   if(flag==0)
   printf("Palindrome");
   else
   printf("Not Palindrome");

    return 0;
}
