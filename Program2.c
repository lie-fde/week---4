/* 2.Write a program to find the sum of digits of a number.
Calculate the sum of all digits of a number entered by the user.
Input:
Enter a number: 1234
Output:
Sum of digits: 10 */

#include <stdio.h>
int main() {
    int i,n,sum=0;
    printf("Enter a postive number:");
    scanf("%d",&n);
    while(n>0)
    {
        sum+=n%10;
        n=n/10;
    }
    printf("%d ",sum);
    return 0;
}v

