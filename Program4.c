4.Write a program to reverse a number.
Reverse the digits of a number entered by the user.
Input:
Enter a number: 1234
Output:
Reversed number: 4321

#include <stdio.h>
int main() {
    int i,n,rev=0,digit;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n>0)
    {
        digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }
    printf("Reversed number:%d",rev);
    return 0;
}
