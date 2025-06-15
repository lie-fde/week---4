/* Insert an element at a specific position in the array (given by the user). */

#include <stdio.h>
int main() {
    int arr[10]={1,2,3,4,5,6},i,j,value,pos,size=6;
    printf("Enter the value:");
    scanf("%d",&value);
    printf("\nEnter the Position:");
    scanf("%d",&pos);
    if(pos>size+1 || pos<=0)
    {
        printf("Invalid");
        return 1;
    }
    pos=pos-1;
    for(i=size;i>=pos;i--)
    arr[i]=arr[i-1];
    arr[pos]=value;
    size++;
    for(i=0;i<size;i++)
    printf("%d ",arr[i]);
    return 0;
}
