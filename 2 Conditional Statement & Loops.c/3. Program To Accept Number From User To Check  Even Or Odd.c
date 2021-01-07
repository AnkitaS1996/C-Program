//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////    Statement= Program To Accept Number From User To Check It's Even Or Odd
////////    Input =2 , 4 , 6 , 8    OR  3 , 5 , 7 , 9 , 11.
////////    Output = Given Number is Even. OR Given Number is Odd.
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 0;
    printf("\n #######****_____ Program For Even Or Odd_____****#######\n");
    printf("\n======================================================\n");

    printf("\n Enter Number to Check it's Even Or Odd :");
    scanf("%d",&No);
    printf("\n======================================================\n");

    if(No <= 0)
    {
        printf("\n Invalid Number.");
        printf("\n======================================================\n");
        return;
    }
    if(No % 2 == 0)
    {
        printf("\n Given Number %d is Even.",No);
    }
    else
    {
        printf("\n Given Number %d is Odd.",No);
    }
    printf("\n======================================================\n");

    printf("\n \n Thank You....!!!!");
    printf("\n======================================================\n");
    getch();
    return 0;
}
