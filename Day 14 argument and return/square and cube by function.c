#include<stdio.h>
int a,b;
void square()
{
    b=a*a;
    printf("%d\n",b);
}
void cube()
{
    b=a*a*a;
    printf("%d",b);
}
void main()
{
    printf("Enter a number");
    scanf("%d",&a);
    square();
    cube();
}
