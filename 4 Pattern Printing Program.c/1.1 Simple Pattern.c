///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////     Statement 1.  simple Pattern.c
///////////                                     I/P : No = 5
///////////                                   O/P  :  *    *   *   *   *
//////////                                               *    *   *   *   *
////////                                                 *    *   *   *   *
///////                                                  *    *   *   *   *
/////////                                                *    *   *   *   *
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 0, i = 0, j = 0;

    printf("\n##########**** Simple Pattern .c****##########\n");

    printf("\n==================================================\n");
    printf("\n Enter  Number To Print Pattern : ");
    scanf("%d",&No);
    printf("\n==================================================\n");

    printf("\n==================================================\n");
    printf("\n");
    for(i=1; i<=No; i++)
    {
        for(j=1; j<=No; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }

    printf("\n==================================================\n");
    printf("\n \n Thank You...!!!!");
    printf("\n==================================================\n");

    getch();
    return 0;
}
