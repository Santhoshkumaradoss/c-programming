void main()
{
    int i,j,x=2;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(x<10)
            {
                printf("  %d",x);
            }
            else
            {
                printf(" %d",x);
            }
            x+=2;
        }
        printf("\n");
    }
}
