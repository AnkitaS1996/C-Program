#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0,j=0,No=0;
    char ch='A';

    printf("\n================================================================\n");

    printf("\n Enter number to print pattern:");
    scanf("%d",&No);

    for(i=1;i<=No;i++)
    {
        for(j=1;j<=No;j++)
        {
            if((j<=i)&&((i+j)<=No+1))
            {
                printf(" %c",ch);
                ch++;
            }
            else
            {
                printf("   ");
            }
        }
        ch='A';
        printf("\n");

    }
    getch();
    return 0;
}
