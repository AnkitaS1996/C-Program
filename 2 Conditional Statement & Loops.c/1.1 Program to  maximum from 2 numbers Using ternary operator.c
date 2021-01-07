/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//       Statement = Program To Maximum From Two Numbers Using Ternary Operator
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
int main()
{
    int No1 = 0, No2 = 0;
    printf("\n #######****_____ Maximum From Two Numbers Using Ternary Operator_____****#######\n");

    printf("\n======================================================\n");

    printf("\n Please Enter Two Number To get its Maximum Number : ");
    scanf("%d%d",&No1,&No2);
    printf("\n======================================================\n");

    if(No1 == No2)
    {
        printf("\n %d & %d are Equal Numbers.",No1,No2);
        printf("\n======================================================\n");
        return;
    }
    printf("\n======================================================\n");

    (No1 > No2)?  printf("\n %d is Maximum",No1):printf("\n %d is Maximum",No2);

    //printf("\n %d is %s ",No1,No2,(No1>No2)?"Maximum":"Maximum");

    printf("\n======================================================\n");

    printf("\n \n Thank You....!!!!!");
    printf("\n======================================================\n");

    getch();
    return 0;
}
