/*  
1
123
12345
1234567
123456789
1234567
12345
123
1  */

#include <stdio.h>
int main() {
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=2*i-1;j++)
        printf("%d",j);
        printf("\n");
    }
    for(i=4;i>0;i--)
    {
        for(j=1;j<=2*i-1;j++)
        printf("%d",j);
        printf("\n");
    }
    return 0;
}
