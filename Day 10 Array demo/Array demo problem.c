
#include<stdio.h>
void main()
{
    int i,x[5]={31,65,77,88,14},sum=0;
    for(i=0;i<5;i++)
    {
        sum=sum+x[i];
    }
    printf("sum = %d",sum);

    printf("\nsum even = %d",x[3]+x[4]);

    printf("\nsum odd = %d",x[0],x[1],x[2]);
}
