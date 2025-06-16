/*  Check if an array is a Frequency Palindrome (i.e., the frequency of the elements reads the same forwards and backwards).  */

#include <stdio.h>
int main() {
   int arr[]={1,2,3,3,2,1,4,5,5,4},i,j,count,k=0;
   int freq[]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},pali[20];
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
 for(i=0;i<n;i++)
 {    if(freq[i]!=0)
      {pali[k]=freq[i];k++;}
 } int flag=0;
 for(i=0;i<k/2;i++)
 {
     if(pali[i]!=pali[k-1-i])
     {
         flag=1;break;
     }
 }
 if(flag==0)
 printf("Frequency is in Palindrome");
 else
 printf("Frequency is not palindrome");
 return 0;
}
