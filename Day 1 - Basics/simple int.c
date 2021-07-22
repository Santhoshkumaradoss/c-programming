#include<stdio.h>
void main()
{
int p,n;
float r,si;
printf("\tenter initial amount\n\t");
scanf("%d",&p);
printf("\n\tnumber of years\n\t");
scanf("%d",&n);
printf("\n\trate of intrest\n\t");
scanf("%f",&r);
si=p*n*r/100;
printf("\n\ttotal to be paid = %f",si);
}
