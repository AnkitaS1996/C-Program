/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//       Statement = Program To Maximum From Two Numbers
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
int main()
{
    int No1 = 0, No2 = 0;
    printf("\n #######****_____ Maximum From Two Numbers_____****#######\n");

    printf("\n======================================================\n");

    printf("\n Enter Two Number to Display its Maximum Number : ");
    scanf("%d%d",&No1,&No2);

    printf("\n======================================================\n");
    if(No1 == No2)
    {
        printf("\n Number Are Equals.......!!!!");
        printf("\n======================================================\n");
        goto Down;
    }
    //(No1>No2)? printf("\n Given Number %d is Maximum.",No1):printf("\n Given Number %d is Maximum.",No2);

    if(No1 > No2)
    {
        printf("\n Given Number %d is Maximum.",No1);
    }
    else
    {
        printf("\n Given Number %d is Maximum.",No2);
    }

    printf("\n======================================================\n");
    Down:
    printf("\n Thank You...!!!!!");
    printf("\n======================================================\n");
    getch();
    return 0;
}
