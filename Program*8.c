/*   
11111
10001
10001
10001
11111    */

#include <stdio.h>
int main() {
    int i,j;
    for(i=1;i<=5;i++)
    {
        if(i==1 || i==5)
        printf("11111");
        else
        printf("10001");
        printf("\n");
    }
    return 0;
}
