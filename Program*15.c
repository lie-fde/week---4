/*        * 
        *   * 
      *       * 
    *           * 
  * * * * * * * * *    */

#include <stdio.h>
int main() {
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=i;j<=5;j++)
        printf("  ");
        for(j=1;j<=2*(i-1)+1;j++)
        {   if(i==5 || j==1 || j==i*2-1)
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }
    return 0;
}
