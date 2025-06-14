/* 6.Calculator Program: Create a simple calculator using switch-case.
Perform addition, subtraction, multiplication, or division based on user input.
Input:
Enter two numbers: 10 5
Enter an operator (+, -, *, /): *
Output:
Result: 50 */

#include <stdio.h>
int main() {
    int i,n1,n2,result;
    char oper;
    printf("Enter two number:");
    scanf("%d%d",&n1,&n2);
    printf("Enter an operator:");
    scanf(" %c",&oper);
    switch(oper)
    {   case '+' : result=n1+n2;
                   break;
        case '-' : result=n1-n2;
                   break;
        case '*' : result=n1*n2;
                   break;
        case '/' : result=n1/n2;
                   break;
        default : printf("Invalid");
                  return 1;
        }
    printf("Result:%d",result);
    return 0;
}
