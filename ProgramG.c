/* Write a program to move all zeros in an array to the end while maintaining the relative order of non-zero elements. For example:
Input:
arr = {0, 1, 9, 8, 4, 0, 2, 7, 0}
Output:
arr = {1, 9, 8, 4, 2, 7, 0, 0, 0}
 */


#include <stdio.h>
int main() {
   int arr[]={0,1,9,8,4,0,2,7,0},i,k,index,count=0,j=0;
   int n = sizeof(arr)/sizeof(arr[0]);
   for(i=0;i<n-j;i++)
   {
       if(arr[i]==0)
       {
          index=i;
          for(k=i;k<n-1;k++)
          arr[k]=arr[k+1];
          arr[n-1-j]=0;
          j++;
       }
   }
   for(i=0;i<n;i++)
   printf("%d ",arr[i]);

    return 0;
}
