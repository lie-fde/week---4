/*        A 
        A   C 
      A       E 
    A           G 
  A B C D E F G H I  */


#include <stdio.h>
int main() {
    int i,j,k=67,m=65;
    for(i=1;i<=5;i++)
    {
        for(j=i;j<=5;j++)
        printf("  ");
        for(j=1;j<=2*(i-1)+1;j++)
        {   if (i==5)
             {
                printf("%c ",m);
                m++;
             }
            else if(j==1)
            printf("A ");
            else if (j==i*2-1)
            {
                printf("%c ",k);
                k+=2;
            }
            else
            printf("  ");
        }
        printf("\n");
    }
    return 0;
}
