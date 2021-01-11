#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{

    int   No=0,i=0,j=0;  /// Hint: -- Row=i;col=j;

    printf("\n -----------------------------------------  $$$$  Lower  Left Triangular  $$$$ ------------------------------------------------- \n");

    printf("\n=======================================================================================\n");

    up:

    printf("\n Enter a number to print pattern : ");
    scanf("%d",&No);

    printf("\n=======================================================================================\n");

    if(No>=9)
    {
        printf("\n Invalid Number");
        system("cls");
        goto up;
    }

    for(i=1;i<=No;i++)
    {
        for(j=1;j<=No;j++)
        {
                    if((j<=i))
                    {
                        printf(" * ");
                    }
                    else
                    {
                        printf("   ");
                    }
        }
        printf("\n");
    }

    printf("\n=======================================================================================\n");

    printf("\n \n Thank You");

    printf("\n=======================================================================================\n");

    getch();
    return 0;

}
