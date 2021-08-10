#include<stdio.h>
void main()
{
    int i,x[5]={1,2,3,4,8},sum=0;
    for(i=0;i<5;i++)
    {
        sum=sum+x[i];
    }
    for(i=0;i<5;i++)
    {
        printf(" %d",x[i]);
    }
    printf("\n sum=%d",sum);
}
