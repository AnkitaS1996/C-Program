//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////  Statement = Optimize Program to accept Number from user & check its whether it's Prime Or Not.
/////////   Input = Number =  17, 971
/////////   Output= Given Number is Prime.
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
int main()
{
    int iNo = 0, i = 2;

    printf("\n #######****_____ Program For Prime Number Or Not Using goto_____****#######\n");

    printf("\n======================================================\n");
    Up:

    printf("\n Enter Number to check its whether Prime Or Not : ");
    scanf("%d",&iNo);

    printf("\n======================================================\n");
    if(iNo < 0)
    {
        printf("\n Invalid Number.");
        printf("\n======================================================\n");
        goto Down;
    }
    if(iNo == 0 || iNo == 1)
    {
        printf("\n Given Number is Neutral..!!");
        printf("\n======================================================\n");
        goto Up;
    }
    while(i < iNo/2)
    {
        if(iNo % i == 0)
        {
            break;
        }
        i++;
    }
    if(iNo/2 == i)
    {
        printf("\n Given Number %d is Prime.",iNo);
    }
    else
    {
        printf("\n Given Number %d is Not Prime.",iNo);
    }
    printf("\n======================================================\n");
    Down:
    printf("\n \n Thank You.......!!!!");
    printf("\n======================================================\n");
}
