///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////    Statement =   Lower Left Triangular Pattern.
////////                                      I/P :    5
///////                                     O/P :    *
/////////                                               *    *
////////                                                *    *   *
///////                                                 *    *   *   *
/////////                                               *    *   *   *   *
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
int main()
{
    int i = 0, j = 0, No = 0;
    printf("\n##########**** Lower Left Triangular Pattern .c****##########\n");

    printf("\n==================================================\n");
    printf("\n Enter Number to print Pattern : ");
    scanf("%d",&No);
    printf("\n==================================================\n");

    for(i = 1;i <= No;i++)
    {
        for(j =1;j <= No;j++)
        {
            if(i >= j)
            {
                printf(" *");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }

    printf("\n==================================================\n");
    printf("\n \n Thank You.....!!!!");
    printf("\n==================================================\n");

    getch();
    return 0;
}
