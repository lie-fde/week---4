/*  Write a program to count the frequency of each number without using extra arrays. */

#include <stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,1,2,3,6,7},i,j,count;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<n;i++)
    {
        if(arr[i]==-1)
        {   count=-1; continue; }
        count=1;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]==-1)
            continue;
            else if(arr[i]==arr[j])
            {
                count++;
                arr[j]=-1;
            }
        }if(count!=-1)
        printf("\n%d appeared %d times",arr[i],count);
    }

    return 0;
}
