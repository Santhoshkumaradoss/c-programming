#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    printf("%d",n>21?2*(n-21):n-21);

}
