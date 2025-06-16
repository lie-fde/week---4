/* Find the element with the highest frequency and print it along with its frequency. */

#include <stdio.h>
int main() {
   int arr[]={1,2,3,0,5,1,0,3,3,0},i,j,count,index;
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
  int max=freq[0];
 for(i=0;i<n;i++)
 {
     if(freq[i]>max)
     {
         max=freq[i];
         index=i;
     }
 }
     printf("\n%d appeared %d times",arr[index],freq[index]);
  return 0;
}
