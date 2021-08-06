#include<stdio.h>
void main()
{
    int n,sum=0,product,m;
    printf("enter the number");
    scanf("%d",&n);
    m=n;
    while(n>0)
        {
            product=n%10*n%10*n%10;
            n=n/10;
            sum=sum+product;
        }
        printf("%s",m==sum?"amstrong":"not a amstrong");
}
