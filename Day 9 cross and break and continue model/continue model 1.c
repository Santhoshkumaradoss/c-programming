#include<stdio.h>
void main()
{
    int i;
    for(i=1;i<=11;i++)
    {
        if(i==6)
        {
            continue;
        }
        printf(" %d",i);
    }
}
