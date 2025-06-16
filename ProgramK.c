/* Find the unique and duplicate values for an array containing only positive numbers.  */

#include <stdio.h>
int main() {
   int arr[]={1,2,-2,4,5,1,2,3,3,-5},i,j,count;
   int freq[]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
   int duplicate=0,unique=0;
   int n = sizeof(arr)/sizeof(arr[0]);
   for(i=0;i<n;i++)
   {   if(arr[i]<0){
       continue;}
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
  {   if(freq[i]==0)
      duplicate++;
      else if(freq[i]==1)
      unique++;
  }
  printf("unique elements: %d",unique);
  printf("\nDuplicate elements: %d",duplicate);
  return 0;
}
