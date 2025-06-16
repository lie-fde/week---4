/*  Group the elements by frequency count (e.g., numbers that appear once, twice, etc.).  */

#include <stdio.h>
int main() {
   int arr[]={1,2,3,2,5,1,2,3,3,4},i,j,count,index;
   int freq[]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},temp,temp1;
   int n = sizeof(arr)/sizeof(arr[0]);
   for(i=0;i<n;i++)
   {   count=1;
       for(j=i+1;j<n;j++)
       {  if(arr[i]==arr[j])
           {   count++;
               freq[j]=0;}}
       if(freq[i]!=0)
       freq[i]=count;
   }
  int max=freq[0];
 for(i=0;i<n;i++)
 {   for(j=i+1;j<n;j++)
 {   if(freq[i]>freq[j])
     {   temp=freq[i]; temp1=arr[i];
         freq[i]=freq[j]; arr[i]=arr[j];
         freq[j]=temp; arr[j]=temp1;
     }}}
 for(i=0;i<n;i++)
 {    if(freq[i]!=0)
 {    if(i==0 || freq[i]!=freq[i-1])
       printf("\nElements appeared %d times\n",freq[i]);
      printf("%d ",arr[i]);
 }}return 0;
}
