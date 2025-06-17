/*   1 2 3 4 5 6 7 8 9 
       1           7 
         1       5 
           1   3 
             1   */

#include <stdio.h>
int main() {
    int i,j,k=1,m=7;
    for(i=5;i>0;i--)
    {
        for(j=5;j>=i;j--)
        printf("  ");
        for(j=1;j<=2*(i-1)+1;j++)
        {   if (i==5)
            { 
                printf("%d ",k);
                k++;
            }
            else if(j==1)
            { printf("1 "); }
            else if (j==i*2-1)
            {
                printf("%d ",m);
                m-=2;
            }
            else
            printf("  ");
        }
        printf("\n");
    }
    return 0;
}
