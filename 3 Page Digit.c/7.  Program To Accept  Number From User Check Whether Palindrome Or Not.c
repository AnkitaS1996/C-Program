///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////           Statement = Program To Accept  Number From User Check Whether Palindrome Or Not.c
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
int main()
{
            int No = 0, Rev = 0,temp = 0;

            printf("\n=======******* Program For Digit Number Palindrome *******=======\n");
            printf("\n======================================================\n");
            printf("\n Enter Number to check its Palindrome Or Not : ");
            scanf("%d",&No);
            printf("\n======================================================\n");

            temp = No;

            while(temp > 0)
            {
                        Rev = (Rev * 10) + (temp % 10);
                        temp = temp / 10;
            }

            if(Rev == No)
            {
                        printf("\n Given Number %d is Palindrome.",No);
                        printf("\n======================================================\n");
            }
            else
            {
                        printf("\n Given Number %d is Not Palindrome.",No);
                        printf("\n======================================================\n");
            }

             printf("\n======================================================\n");
             printf("\n  Thank You....!!!");
             printf("\n======================================================\n");

             getch();
             return 0;
}
