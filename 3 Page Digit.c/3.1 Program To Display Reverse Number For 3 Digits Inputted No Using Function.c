/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////      Statement = Program To Display Reverse Number For 3 Digit Inputted Number
//////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
void NumberRev(int No)
{
            int Rev = 0, temp = 0;

            temp = No;
            while(temp > 0)
            {
                        //digit = temp%10;
                        Rev = (Rev * 10) + (temp % 10);
                        temp = temp/10;
            }

           printf("\n Given Reverse Number is %d is = %d",No,Rev);
}

int main()
{
            int Num = 0;

            printf("\n********************************* Reverse Number ******************************************\n");

            printf("\n======================================================\n");
            printf("\n Enter Digit Number To Display Its Reverse Number : ");
            scanf("%d",&Num);
            printf("\n======================================================\n");

            NumberRev(Num);

            printf("\n======================================================\n");
            printf("\n  Thank You....!!!");
            printf("\n======================================================\n");

            getch();
            return 0;

}
