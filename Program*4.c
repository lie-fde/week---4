/*   
11111
00000
11111
00000
11111   */


#include <stdio.h>
int main() {
    int i,j;
    for(i=1;i<=5;i++)
    {
        if(i%2==0)
        printf("00000");
        else
        printf("11111");
      
        printf("\n");
    }
    return 0;
}
