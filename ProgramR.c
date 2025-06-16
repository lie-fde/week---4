/*  Identify and count the most frequently occurring element(s) in an array.  */

#include <stdio.h>
int main() {
   int arr[]={1,2,3,2,5,1,2,3,3,4},i,j,count,index;
   int freq[]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
   int n = sizeof(arr)/sizeof(arr[0]);
   for(i=0;i<n;i++)
   { 
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
  int max=freq[0];
 for(i=0;i<n;i++)
 {
     if(freq[i]>max)
     max=freq[i];
 }
 for(i=0;i<n;i++)
 {
     if(freq[i]==max)
      printf("\n%d appeared %d times",arr[i],freq[i]);
 }
  return 0;
}
