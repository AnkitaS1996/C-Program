/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////    Statement = Program To Input 3 Digit No. & Find Out Maximum Digit From It.
////            Input =  358
////          Output =  8 is Maximum Digit.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 0, temp = 0, digit = 0,max = 0;

    printf("\n##########**** 3 Digit Number To Find Maximum Digit ****##########\n");

    printf("\n=======================================================\n");
    printf("\n Enter 3 Digit Number To Find Maximum Digit From it : ");
    scanf("%d",&No);
    printf("\n=======================================================\n");

    /*while(temp > 0)
    {
        temp = temp / 10;   /////temp/=10;
        digit++;
    }
    if(No > 3 || No < 3)
    {
            printf("\n Invalid Number..!!");
            goto Back;
    }*/

    temp = No;
    while(temp > 0)
    {
            digit =  temp%10;
            if(digit > max)
            {
                    max = digit;
            }
            temp = temp/10;
    }

    printf("\n=======================================================\n");
    printf("\n Maximum Digit is %d",max);
    printf("\n=======================================================\n");
    //Back:
    printf("\n \n Thank You....!!!!!!");
    printf("\n=======================================================\n");

    getch();
    return 0;
}
