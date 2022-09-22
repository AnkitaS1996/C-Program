#include<stdio.h>
#include<conio.h>
int main()
{
    int i = 0,j = 0,No = 0;

    printf("\n");

    printf("\n\t Enter Number : ");
    scanf("%d",&No);
    printf("\n");
    for(i=1;i<=No;i++)
    {
        printf("\t");
        for(j=1;j<=No;j++)
        {
            if(i==No/2+1 || j==No/2+1 || (i==1 && j>=No/2+1) || (j==1 && i<=No/2+1) || (i==No && j<=No/2+1) || (j==No && i>=No/2+1) )
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}
