#include<stdio.h>
#include<conio.h>
int main()
{
    int No=0,i=0,j=0;

    printf("\n###############################**** H-Pattern ****###################################\n");

    printf("\n=====================================================================================\n");

    printf("\n Enter Number to print pattern :");
    scanf("%d",&No);

    for(i=1;i<=No;i++)
    {
        for(j=1;j<=No;j++)
        {
            if((j==1)||(j==No)||(i==No/2+1))
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

    printf("\n=====================================================================================\n");

    getch();
    return 0;
}

