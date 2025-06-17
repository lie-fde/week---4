/*  * * * * * * * * *  
     *            * 
       *        * 
         *    * 
           * 
 */

#include <stdio.h>
int main() {
    int i,j;
    for(i=5;i>0;i--)
    {
        for(j=5;j>=i;j--)
        printf("  ");
        for(j=1;j<=2*(i-1)+1;j++)
        {
            if(j==1 || i==5 || j==i*2-1)
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }
    return 0;
}
