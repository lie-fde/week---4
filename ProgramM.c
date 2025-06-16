/* Find the unique values in an array with negative and positive numbers. */


#include <stdio.h>
int main() {
   int arr[]={1,-1,3,-2,5,1,-1,3,3,0},i,j,count;
   int freq[]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
   int duplicate=0,unique=0;
   int n = sizeof(arr)/sizeof(arr[0]);
   for(i=0;i<n;i++)
   {   count=1;
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
     if(freq[i]==1)
     printf("%d ",arr[i]);
 }
  return 0;
}
