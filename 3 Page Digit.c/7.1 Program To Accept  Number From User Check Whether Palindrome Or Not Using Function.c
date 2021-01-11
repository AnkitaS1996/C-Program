///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////           Statement = Program To Accept  Number From User Check Whether Palindrome Or Not.c
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>

void NumberPalindrome(int Num)
{
           int temp = 0, Rev = 0;

           temp = Num;

            while(temp > 0)
            {
                        Rev = (Rev * 10) + (temp % 10);
                        temp = temp / 10;
            }

            if(Rev == Num)
            {
                        printf("\n Given Number %d is Palindrome.",Num);
                        printf("\n======================================================\n");
            }
            else
            {
                        printf("\n Given Number %d is Not Palindrome.",Num);
                        printf("\n======================================================\n");
            }
}
int main()
{
            int No = 0, Rev = 0;

            printf("\n=======******* Program For Digit Number Palindrome *******=======\n");

            printf("\n======================================================\n");
            printf("\n Enter Number to check its Palindrome Or Not : ");
            scanf("%d",&No);
            printf("\n======================================================\n");

            NumberPalindrome(No);

             printf("\n======================================================\n");
             printf("\n  Thank You....!!!");
             printf("\n======================================================\n");

             getch();
             return 0;
}
