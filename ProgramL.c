/* Count how many duplicate numbers are divisible by a given number (e.g., 3). */

#include <stdio.h>
int main() {
   int arr[]={1,2,3,4,5,1,2,3,3,0},i,j,count;
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
   int mcount=0;
  for(i=0;i<n;i++)
  {   if(freq[i]>0)
      {  if(freq[i]%3==0)
          mcount++;
      }
  }
  printf("Duplicate elements divisible by 3: %d",mcount);
  return 0;
}
