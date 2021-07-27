#include<stdio.h>
void main()
{
int n;
printf("enter the number");
scanf("%d",&n);
printf("%s",n%10==5?"number ends with 5":"number is not ends with 5");
}
