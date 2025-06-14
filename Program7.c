/* 7.Factorial of a Number: Write a program to find the factorial of a number.
Calculate the factorial of a number n (e.g., 5! = 5 * 4 * 3 * 2 * 1 = 120).
Input:
Enter a number: 5
Output:
Factorial: 120  */

#include <stdio.h>
int main() {
    int i,n,fact=1;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        fact*=i;
    }
    printf("Factorial:%d",fact);
    return 0;
}
