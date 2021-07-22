#include<stdio.h>
void main()
{
int tamil,eng,math,sci,soc,totavg;
printf("\tsubject\t\t\t\t\tmark");
printf("\n\t---------------------------------------------");
printf("\n\n\tTamil\t\t\t\t\t");
scanf("%d",&tamil);
printf("\n\t---------------------------------------------");
printf("\n\tEnglish\t\t\t\t\t");
scanf("%d",&eng);
printf("\n\t---------------------------------------------");
printf("\n\tMathamatics\t\t\t\t");
scanf("%d",&math);
printf("\n\t---------------------------------------------");
printf("\n\tScience\t\t\t\t\t");
scanf("%d",&sci);
printf("\n\t---------------------------------------------");
printf("\n\tSocial\t\t\t\t\t");
scanf("%d",&soc);
printf("\n\t---------------------------------------------");
printf("\n\tAverage Total");
totavg=(tamil+eng+math+sci+soc)/5;
printf("\t\t\t\t%d",totavg);
printf("\n\t---------------------------------------------");
}

