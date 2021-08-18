#include<stdio.h>
void main()
{
    char a[3][3],choice='y';
    int i,j,col,row;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            a[i][j]='*';
        }
        printf("\n");
    }
    while(choice=='y')
    {
        printf("   0 1 2\n");
        for(i=0;i<3;i++)
        {
            printf(" %d",i);
            for(j=0;j<3;j++)
            {
                printf(" %c",a[i][j]);
            }
            printf("\n");
        }
        printf("Row position");
        scanf("%d",&row);
        printf("column position");
        scanf("%d",&col);
        if(a[row-1][col-1]=='*')
        {
            a[row-1][col-1]='_';
        }
        else
        {
            printf("this position is unavailable");
        }
        choice=getch();


    }
}
