///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////  Statement =  Program to check whether entered character is Uppercase / Lowercase / Digit / Special Symbol Using ASCII No. (Use Switch)
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
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

    switch(ch)
    {
        printf("\n======================================================\n");
        case 65 ... 90:
                    printf("\n Given Character %c is Uppercase.",ch);
                    break;
        case 97 ... 122:
                    printf("\n Given Character %c is Lowercase.",ch);
                    break;
        case 48 ... 57:
                    printf("\n Given Character %c is Digit.",ch);
                    break;
        default :
                    printf("\n Given Character %c is Special Symbol.",ch);
                    break;
    }
    printf("\n======================================================\n");
    printf("\n \n Thank You...!!!!");
    printf("\n======================================================\n");
    getch();
    return 0;
}

