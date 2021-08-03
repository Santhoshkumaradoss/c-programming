#include<stdio.h>
void main()
{
    int n,i,sum=0;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        sum=sum+i;
        printf("%d+",i);
    }
    sum+=n;
    printf("%d=%d",n,sum);
}
