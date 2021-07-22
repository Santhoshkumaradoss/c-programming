#include<stdio.h>
int main()
{
int cost,numbers,total;
printf("\n\tcost of ice cream\n\t");
scanf("%d",&cost);
printf("\n\tnumber of ice cream\n\t");
scanf("%d",&numbers);
total=numbers*cost;
printf("\n\ttotal amount=(%d*%d)=%d",cost,numbers,total);
}
