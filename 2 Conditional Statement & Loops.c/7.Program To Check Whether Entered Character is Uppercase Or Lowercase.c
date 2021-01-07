///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////  Statement = Program To Check Whether Entered Character Is Uppercase & Lowercase .
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
int main()
{
    char ch = '\0';
    printf("\n #######****_____ Program For Uppercase & Lowercase_____****#######\n");
    printf("\n======================================================\n");
    printf("\n Enter Character To Check whether its Uppercase & Lowercase : ");
    scanf("%c",&ch);
    printf("\n======================================================\n");
    if(ch >= 'A' && ch <= 'Z')
    {
        printf("\n Given Character %c is Uppercase.",ch);
    }
    else if(ch >= 'a'  && ch <= 'z')
    {
        printf("\n Given Character %c is Lowercase. ",ch);
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
