//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////    Statement = Program to Display Maximum Number From 3 Numbers Using goto
////////////////     Input = No1=12, No2=36, No3=40
///////////////     Output = Given Number No3 is Maximum.
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
int main()
{
    int No1=0,No2=0,No3=0;

    printf("\n #######****_____ Maximum From Three Numbers Using goto_____****#######\n");

    printf("\n======================================================\n");
    printf("\n Enter Any Three Numbers To Check its Maximum Number : ");
    scanf("%d%d%d",&No1,&No2,&No3);
    printf("\n======================================================\n");

    if((No1 == No2) && (No1 == No3))
    {
        printf("\n All Three Given Number Are Equals..!!!");
        printf("\n======================================================\n");
        goto Down;
    }

    if(No1 > No2)
    {
        if(No1 > No3)
        {
            printf("\n Given Number No1 = %d is Maximum.",No1);
        }
        else
        {
            printf("\n Given Number No3 = %d is Maximum.",No3);
        }
    }
    else if(No2 > No3)
    {
        printf("\n Given Number No2 = %d is Maximum.",No2);
    }
    else
    {
        printf("\n Gien Number No3 = %d is Maximum.",No3);
    }
    printf("\n======================================================\n");
    Down:
    printf("\n \n Thank You..!!!");
    printf("\n======================================================\n");
    getch();
    return 0;
}
