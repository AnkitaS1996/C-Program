//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////                               ****** MINI CALCULATOR ******
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
        int Add(int , int);
        int Sub(int , int);
        int Mul( int , int);
        int Div( int , int);
        int Mod(int , int);

        int No1 = 0, No2 = 0,Choice = 0;

        printf("\n##########################***** MINI CALCULATOR *****##########################\n");

        Up:

        printf("\n=====================================================================\n");
        printf("\n Select Choice : ");
        printf("\n=====================================================================\n");

        printf("\n 1. Addition. ");
        printf("\n 2. Subtraction. ");
        printf("\n 3. Multiplication. ");
        printf("\n 4. Division. ");
        printf("\n 5. Modulo. ");
        printf("\n 6.Exit. ");
        printf("\n=====================================================================\n");

        for(;;)
        {
                printf("\n=====================================================================\n");
                printf("\n \n Enter Your Choice : ");
                scanf("%d",&Choice);
                printf("\n=====================================================================\n");

                switch(Choice)
                {
                            case 1 :
                                        printf("\n Enter 2 Numbers to Addition : ");
                                        scanf("%d%d",&No1,&No2);
                                        printf("\n=====================================================================\n");
                                        printf("\n Addition of %d & %d is = %d",No1,No2,Add(No1,No2));
                                        printf("\n=====================================================================\n");
                                        getch();
                                        system("cls");
                                        goto Up;
                                        break;

                            case 2:
                                        printf("\n Enter 2 Numbers For Subtractions :");
                                        scanf("%d%d",&No1,&No2);
                                        printf("\n=====================================================================\n");
                                        printf("\n Subtraction  of  %d & %d is = %d",No1,No2,Sub(No1,No2));
                                        printf("\n=====================================================================\n");
                                        getch();
                                        system("cls");
                                        goto Up;
                                        break;

                            case 3:
                                        printf("\n Enter 2 Numbers For Multiplication : ");
                                        scanf("%d%d",&No1,&No2);
                                        printf("\n=====================================================================\n");
                                        printf("\n Multiplication of %d & %d is = %d",No1,No2,Mult(No1,No2));
                                        printf("\n=====================================================================\n");
                                        getch();
                                        system("cls");
                                        goto Up;
                                        break;

                            case  4:
                                        printf("\n Enter 2 Numbers for Division : ");
                                        scanf("%d%d",&No1,&No2);
                                        printf("\n=====================================================================\n");
                                        printf("\n Division of %d & %d is = %d.",No1,No2,Div(No1,No2));
                                        printf("\n=====================================================================\n");
                                        getch();
                                        system("cls");
                                        goto Up;
                                        break;

                            case 5:
                                        printf("\n Enter 2 Numbers for Modulo : ");
                                        scanf("%d%d",&No1,&No2);
                                        printf("\n=====================================================================\n");
                                        printf("\n Modulo of %d & %d is = %d.",No1,No2,Mod(No1,No2));
                                        printf("\n=====================================================================\n");
                                        getch();
                                        system("cls");
                                        goto Up;
                                        break;

                            case 6:
                                        goto Down;

                            default:
                                       printf("\n Invalid  Choice Please Select Valid Choice : ");
                                       printf("\n=====================================================================\n");
                                       getch();
                                       system("cls");
                                       goto Up;
                                       break;
                }
        }
        Down :
                printf("\n Thanks For Working With Demo Calculator.....!!!!");
                printf("\n=====================================================================\n");
                getch();
                return 0;
}
int Add(int No1,int No2)
{
            int Sum = 0;
            Sum = No1 + No2;
            return Sum;
}

int Sub(int No1,int No2)
{
            int Minus = 0;
            Minus = No1 - No2;
            return Minus;
}
int Mult(int No1,int No2)
{
            int Multp = 0;
            Multp = No1 * No2;
            return Multp;
}
int Div(int No1,int No2)
{
            int Division = 0;
            Division = No1 / No2;
            return Division;
}
int Mod(int No1,int No2)
{
            int Modulo = 0;
            Modulo = No1 % No2;
            return Modulo;
}

