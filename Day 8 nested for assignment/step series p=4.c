#include<stdio.h>
void main()
{
    int i,j,x;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            x=j*2;
            printf(" %d",x);
        }
        printf("\n");
    }
}
