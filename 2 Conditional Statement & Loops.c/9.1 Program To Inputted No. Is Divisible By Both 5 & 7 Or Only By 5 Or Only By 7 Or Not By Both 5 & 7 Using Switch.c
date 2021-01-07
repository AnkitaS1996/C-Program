////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///// Statement =  Program To Inputted No. Is Divisible By Both 5 & 7 Or Only By 5 Or Only By 7 Or Not By Both 5 & 7
/////                       Using Switch.
/////          Input = 35
/////        Output = Number is Divisible By Both 5 & 7
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 0;
    printf("\n ############################****__ Using Switch Statement __****############################ \n");
    printf("\n ####****__Program To Inputted No. Is Divisible By Both 5 & 7 Or Only By 5 Or Only By 7 Or Not By Both 5 & 7 __****####\n");

    printf("\n======================================================\n");
    printf("\n Please Enter Number : ");
    scanf("%d",&No);
    printf("\n======================================================\n");

    switch(No)
    {
        case 5 & 7 :
                    printf("\n Given Number %d is Divisible By Both 5 & 7 .",No);
                    break;

        case 5:
                    printf("\n Given Number %d is Divisible By 5.",No);
                    break;
        case 7 :
                    printf("\n Given Number %d is Divisible By 7.",No);
                    break;
        default :
                    printf("\n Given Number %d is Not Divisible By Both 5 & 7.",No);
                    break;
    }

    printf("\n======================================================\n");
    printf("\n \n Thank you......!!!!!");
    printf("\n======================================================\n");

    getch();
    return 0;
}
