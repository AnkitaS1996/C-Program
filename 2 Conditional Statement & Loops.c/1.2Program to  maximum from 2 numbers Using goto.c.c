/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//       Statement = Program To Maximum From Two Numbers Using goto.
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
int main()
{
    int No1 = 0, No2 = 0;
    printf("\n #######****_____ Maximum From Two Numbers Using goto_____****#######\n");
    Up:
        printf("\n======================================================\n");

        printf("\n Please Enter Two Number To get its Maximum Number : ");
        scanf("%d%d",&No1,&No2);

        printf("\n======================================================\n");

        if(No1 == No2)
        {
            printf("\n %d & %d are Equal Numbers",No1,No2);
            goto Up;
        }

        if(No1 > No2)
        {
            printf("\n %d is Maximum",No1);
        }
        else
        {
            printf("\n %d is Maximum",No2);
        }
        printf("\n======================================================\n");

        printf("\n \n Thank You.......!!!!");

        printf("\n======================================================\n");

        getch();
        return 0;
}
