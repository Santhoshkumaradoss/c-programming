#include<stdio.h>
void main()
{
    int i,j,c='A';
    for(j='A';j<='E';j++)
    {
        for(i='E';i>='A';i--)
        {
           printf(" %c",c);
           c+=5;

        }
        printf("\n");
    }
}
