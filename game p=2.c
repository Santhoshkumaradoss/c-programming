#include<stdio.h>
void main()
{
    char name[30],a[3][3];
    int i,j,col,row,choice=1;
    printf("Enter your name");
    gets(name);
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            a[i][j]='*';
        }
        printf("\n");
    }
    while(choice==1)
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
            a[row-1][col-1]=name[0];
        }
        else
        {
            printf("this position is unavailable\n");
        }
        if((a[0][0]&a[1][1]&a[2][2]==name[0])||(a[0][0]&a[1][0]&a[2][0]==name[0])||(a[0][0]&a[0][1]&a[0][2]==name[0])||(a[1][0]&a[1][1]&a[1][2]==name[0])||(a[2][0]&a[2][1]&a[2][2]==name[0])||(a[0][1]&a[1][1]&a[2][1]==name[0])||(a[0][2]&a[1][2]&a[2][2]==name[0])||(a[2][0]&a[1][1]&a[2][0]==name[0]))
          {
              printf("Game over");
              break;

          }


    }
}
