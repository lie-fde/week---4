/*5.Write a program to print the Fibonacci series up to n terms.
Print the Fibonacci series up to n terms. The Fibonacci series starts with 0 and 1, and each subsequent term is the sum of the previous two.
Input:
Enter the number of terms: 5
Output:
Fibonacci Series: 0 1 1 2 3  */

#include <stdio.h>
int main() {
    int i,n,first=0,second=1 ,temp;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       
        printf("%d ",first);
        temp=first;
        first=second;
        second=second+temp;
    }
    return 0;
}
