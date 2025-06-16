/*  Write a program that excludes zeros from the frequency count.  */

#include <stdio.h>
int main() {
   int arr[]={1,2,3,0,5,1,0,3,3,0},i,j,count;
   int freq[]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
   int n = sizeof(arr)/sizeof(arr[0]);
   for(i=0;i<n;i++)
   {   if(arr[i]==0)
       { continue; }
       count=1;
       for(j=i+1;j<n;j++)
       {  
           if(arr[i]==arr[j])
           {   count++;
               freq[j]=0;
           }
       }
       if(freq[i]!=0)
       freq[i]=count;
   }
   
 for(i=0;i<n;i++)
 {
     if(freq[i]>0)
     printf("\n%d appeared %d times",arr[i],freq[i]);
 }
  return 0;
}
