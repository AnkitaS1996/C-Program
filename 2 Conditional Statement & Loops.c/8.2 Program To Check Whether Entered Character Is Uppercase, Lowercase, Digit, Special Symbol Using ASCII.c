////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////  Statement =  Program to check whether entered character is Uppercase / Lowercase / Digit / Special Symbol Using ASCII No. (Use if_else_if Ladder)
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
int main()
{
    char ch = '\0';
    printf("\n #######****_____ Program For Uppercase & Lowercase & Special Symbol & Digit Using ASCII No._____****#######\n");
    printf("\n======================================================\n");

    printf("\n Enter Character to check character is Uppercase, Lowercase, Digit, Special Symbol : ");
    scanf("%c",&ch);

    printf("\n======================================================\n");
    if(ch >= 65 && ch <= 90)
    {
        printf("\n Given Character %c is Uppercase.",ch);
    }
    else if(ch >= 97 && ch <= 122)
    {
        printf("\n Given Character %c is Lowercase.",ch);
    }
    else if(ch >= 48 && ch <= 57)
    {
        printf("\n Given Character %c is Digit.",ch);
    }
    else
    {
        printf("\n Given Character %c is Special Symbol.",ch);
    }
    printf("\n======================================================\n");
    printf("\n \n Thank You...!!!!");
    printf("\n======================================================\n");
}
