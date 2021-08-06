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

/*
                iteration        5
        i=1  i<5    sum=0+1=1; 1++
        i=2  i<5    sum=1+2=3; 2++
        i=3  i<5    sum=3+3=6; 3++
        i=4  i<5    sum=6+4=10; 4++
                TERMINATED;;
                ANSWER=10
