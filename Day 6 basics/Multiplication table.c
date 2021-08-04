#include<stdio.h>
void main()
{
    int i,product;
    printf("4 tables\n");
    for(i=1;i<=10;i++)
    {
        product=i*4;
        printf("%d*4=%d\n",i,product);
    }
}
/*
                ITERATION
          i=1   i<=10         1*4=4;
          i=2   i<=10         2*4=8;
          i=3   i<=10         3*4=12;
          i=4   i<=10         4*4=16;
          i=5   i<=10         5*4=20;
          i=6   i<=10         6*4=24;
          i=7   i<=10         7*4=28;
          i=8   i<=10         8*4=32;
          i=9   i<=10         9*4=36;
          i=10  i<=10         10*4=40;
                TERMINATED;;
