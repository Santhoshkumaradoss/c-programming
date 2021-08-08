#include<stdio.h>
void main()
{
    int i,j,c='A';
    for(i='A';i<='E';i++)
    {
        for(j='A';j<='E';j++)
        {
            printf(" %c",c);
            c++;
        }
        printf("\n");
    }
}
