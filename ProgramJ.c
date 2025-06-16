/* Write a program to count how many unique numbers and duplicates are present in an array.  */


#include <stdio.h>
int main() {
   int arr[]={1,2,3,4,5,1,2,3,3,0},i,j,count;
   int freq[]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
   int duplicate=0,unique=0;
   int n = sizeof(arr)/sizeof(arr[0]);
   for(i=0;i<n;i++)
   {   count=1;
       for(j=i+1;j<n;j++)
       {  if(arr[i]==arr[j])
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
