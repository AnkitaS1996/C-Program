///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////    Statement =   Upper Left Triangular Pattern.(Character)
////////                                      I/P :    5
///////                                     O/P :    A    B   C   D   E
/////////                                               F    G   H   I
////////                                                J     K   L
///////                                                 M    N
/////////                                               O
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 0,i = 0, j = 0;
    char ch = 'A';
    printf("\n##########**** Upper Left Triangular Character Pattern .c****##########\n");

    printf("\n==================================================\n");
    printf("\n Enter Number to print pattern :");
    scanf("%d",&No);
    printf("\n==================================================\n");

    for(i = 1;i <= No;i++)
    {
        for(j = 1;j <= No;j++)
        {
            if(i+j <= No+1)
            {
                printf(" %c",ch);
                ch++;
            }
        }
        printf("\n");
    }

    printf("\n==================================================\n");
    printf("\n Thank You..!!!!");
    printf("\n==================================================\n");

    getch();
    return 0;
}
