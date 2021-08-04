#include<stdio.h>
void main()
{
    int n,i,a=-1,b=1,c;
    printf("Enter the n value");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=a+b;
        printf("%d",c);
        a=b;
        b=c;
    }
}

/*
                        iteration
           fibonacci sequence for 5;

           i=1  i<=5  (a=1,b=-1)c=0;
           i=2  i<=5  (a=-1,b=0)c=1;
           i=3  i<=5  (a=0,b=1)c=1;
           i=4  i<=5  (a=1,b=1)c=2;
           i=5  i<=5  (a=1,b=2)c=3;
        ANS=01123;
