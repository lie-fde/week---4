/*  
1
121
12321
1234321
123454321
1234321
12321
121
1   */

#include <stdio.h>
int main() {
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<i;j++)
        printf("%d",j);
        for(j=i;j>=1;j--)
        printf("%d",j);
        printf("\n");
    }
    for(i=4;i>=1;i--)
    {
        for(j=1;j<i;j++)
        printf("%d",j);
        for(j=i;j>=1;j--)
        printf("%d",j);
        printf("\n");
    }
    return 0;
}
