/*    A B C D E F G H I 
        A           G 
          A       E 
            A   C 
              A   */

#include <stdio.h>
int main() {
    int i,j,k=65,m=71;
    for(i=5;i>0;i--)
    {
        for(j=5;j>=i;j--)
        printf("  ");
        for(j=1;j<=2*(i-1)+1;j++)
        {   if (i==5)
            { 
                printf("%c ",k);
                k++;
            }
            else if(j==1)
            { printf("A "); }
            else if (j==i*2-1)
            {
                printf("%c ",m);
                m-=2;
            }
            else
            printf("  ");
        }
        printf("\n");
    }
    return 0;
}
