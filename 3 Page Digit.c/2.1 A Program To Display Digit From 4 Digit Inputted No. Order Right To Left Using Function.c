////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////       Statement = A Program To Digit From 4 Digit Inputted Number Order Right To Left...
/////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
void Digit(int Num)
{
            int digit = 0;
            while(Num > 0)
            {
                        Num = Num/10;
                        digit++;
            }

            if(digit == 4)
            {
                        printf("\n Given Number is 4 digit Number...!!!");
                        printf("\n======================================================\n");
            }
            else
            {
                        printf("\n Given Number Is Not 4 digit Number..!!!");
                        printf("\n======================================================\n");
            }
}
int main()
{
            int No = 0;

            printf("\n======================================================\n");
            printf("\n Enter Number To Check Whether it's 4 Digit Or Not.. :  ");
            scanf("%d",&No);
            printf("\n======================================================\n");

            Digit(No);

            printf("\n======================================================\n");
            printf("\n  Thank You....!!!");
            printf("\n======================================================\n");

            getch();
            return 0;
}




