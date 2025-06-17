/*        1 
        1   3 
      1       5 
    1           7 
  1 2 3 4 5 6 7 8 9 
   */

#include <stdio.h>
int main() {
    int i,j,k=3,m=1;
    for(i=1;i<=5;i++)
    {
        for(j=i;j<=5;j++)
        printf("  ");
        for(j=1;j<=2*(i-1)+1;j++)
        {   if (i==5)
             {
                printf("%d ",m);
                m++;
             }
            else if(j==1)
            printf("1 ");
            else if (j==i*2-1)
            {
                printf("%d ",k);
                k+=2;
            }
            else
            printf("  ");
        }
        printf("\n");
    }
    return 0;
}
