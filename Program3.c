/* 3.Write a program to check if a number is prime.
Check if a number is prime (divisible only by 1 and itself).
Input:
Enter a number: 7
Output:
Prime
*/

#include <stdio.h>
int main() {
    int i,n,flag=0;
    printf("Enter a number:");
    scanf("%d",&n);
    if (n <= 1) {
        printf("Non Prime");
        return 0;
    }
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    printf("Prime");
    else
    printf("Non Prime");
    return 0;
}
