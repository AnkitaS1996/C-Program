/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////       Statement =  Program To Swap 2 No. Using Functional Approach (Call By Address).
/////               Input  :  No1 = 10, No2 = 20
////              Output :   No1 = 20 , No2 = 10.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
int main()
{
            int No1 = 0, No2 = 0, temp = 0 ;

            printf("\n*******************************Swapping Program (Call By Address)*****************************************\n");

            printf("\n=======================**********=======================\n");
            printf("Enter Two Number : ");
            scanf("%d%d",&No1,&No2);
            printf("\n=======================**********=======================\n");

            printf("\n=======================**********=======================\n");
            printf("\n Values of No1 & No2 Before Swapping No1 = %d & No2 = %d.",No1,No2);
            printf("\n=======================**********=======================\n");

            temp = No1;
            No1 = No2;
            No1 = temp;

            printf("\n=======================**********=======================\n");
            printf("\n Values of No1 & No2 After Swapping No1 = %d & No2 = %d.",No1,No2);
            printf("\n=======================**********=======================\n");

            printf("\n=======================**********=======================\n");
            printf("\n Thank You...!!!");
            printf("\n=======================**********=======================\n");


            getch();
            return 0;
}