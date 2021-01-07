////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////  Statement = Program to accept Number from user & check its whether it's Prime Or Not.
/////////   Input = Number = 2, 17, 971
/////////   Output= Given Number is Prime.
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
int main()
{
    int iNo = 0, i = 0;

    printf("\n #######****_____ Program For Prime Number Or Not_____****#######\n");
    printf("\n======================================================\n");

    printf("\n Enter Number to check its whether Prime Or Not : ");
    scanf("%d",&iNo);

    printf("\n======================================================\n");
    if(iNo < 0)
    {
        printf("\n Invalid Number.");
        printf("\n======================================================\n");
        return;
    }
    if(iNo == 0 || iNo == 1)
    {
        printf("\n Given Number is Neutral..!!");
        printf("\n======================================================\n");
        return;
    }
    for(i = 2;i < iNo; i++)
    {
        if(iNo % i == 0)
        {
            break;
        }
    }
    if(iNo == i)
    {
        printf("\n Given Number %d is Prime.",iNo);
    }
    else
    {
        printf("\n Given Number %d is Not Prime.",iNo);
    }
    printf("\n======================================================\n");
    printf("\n \n Thank You.......!!!!");
    printf("\n======================================================\n");
    getch();
    return 0;
}
