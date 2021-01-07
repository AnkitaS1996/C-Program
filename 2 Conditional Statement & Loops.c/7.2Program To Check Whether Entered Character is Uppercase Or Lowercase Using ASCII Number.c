///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////  Statement = Program To Check Whether Entered Character Is Uppercase & Lowercase Using ASCII Number .
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
int main()
{
    char ch = '\0';
    printf("\n #######****_____ Program For Uppercase & Lowercase Using ASCII_____****#######\n");
    printf("\n======================================================\n");
    printf("\n Enter Character To Check whether its Uppercase & Lowercase : ");
    scanf("\n %c",&ch);
    printf("\n======================================================\n");

    if(ch >= 65 && ch <= 90)
    {
        printf("\n Given Character %c is Uppercase.",ch);
    }
    else if(ch >= 97  && ch <= 122)
    {
        printf("\n Given Character %c is Lowercase.",ch);
    }
    else
    {
        printf("\n Given Character is Invalid.");
    }
    printf("\n======================================================\n");
    printf("\n \n Thank You...!!!");
    printf("\n======================================================\n");
    getch();
    return 0;
}
