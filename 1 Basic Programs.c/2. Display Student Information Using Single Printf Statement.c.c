/*
    Statement = Accept Student Info. form User & Display all information using single printf statement.
    Input = Accept Student Information Form User.
    Output = Display All Student Information Using Single printf Statement.
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    char S_Name[50];
    int S_R_No;
    char S_ci[50];
    char S_co[50];
    unsigned long long int S_Mob_No;
    float S_Per;
    printf("\n #####****______DISPLAY STUDENT INFORMATION______****##### \n");

    printf("\n===========================================\n");
    printf("\n Student Information ");

    printf("\n \n Enter Student Name          : ");
    scanf("%s",&S_Name);

    printf("\n Enter Student Roll Number   : ");
    scanf("%d",&S_R_No);

    printf("\n Enter Student city          : ");
    scanf("%s",&S_ci);

    printf("\n Enter Student Course        : ");
    scanf("%s",&S_co);

    printf("\n Enter Student Mobile Number : ");
    scanf("%lld",&S_Mob_No);

    printf("\n Enter Student Percentage    : ");
    scanf("%f",&S_Per);
    printf("\n===========================================\n");
    system("cls");
    printf("\n===========================================\n");

    //printf("\n \n Display Student Information : ");
    //printf("\n\ n \t Student Name      = %s   \n\t Student Roll No   = %ld   \n \t Student City      = %s   \n \t Student Course    = %s   \n \t student Mobile No = %d   \n \t Student Marks     = %f",
                           //S_Name,S_R_No,S_ci,S_co,S_Mob_No,S_Per);
    printf("\n \t \t Display Student Information \n \n Student Name | Student Roll No | Student City | Student Course | student Mob No | student Marks | \n \n %-12s | %15d | %-12s | %-14s | %14lld | %13.2f |",
           S_Name,S_R_No,S_ci,S_co,S_Mob_No,S_Per);

    printf("\n===========================================\n");
    getch();
    return 0;
}

