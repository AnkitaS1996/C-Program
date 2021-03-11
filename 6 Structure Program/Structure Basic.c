#include<stdio.h>
#include<conio.h>
struct stud
{
    int Roll_No;
    char Name[80];
    char City[30];
    float Per;
};
int main()
{
    struct stud std1,std2;
    //struct stud std1(15,"Ankita Shedage","Karad",70.533);

    std1.Roll_No = 12;
    strcpy(std1.Name,"Ankita Shedage");
    strcpy(std1.City,"Karad");
    std1.Per = 70.653;

    printf("\n Enter Roll Number : ");
    scanf("%d",&std2.Roll_No);

    printf("\n Enter Name : ");
    scanf("%s",&std2.Name);
    fflush(stdin);

    printf("\n Enter City : ");
    scanf("%s",&std2.City);

    printf("\n Enter Percentage : ");
    scanf("%f",&std2.Per);

    printf("\n 1st Student Details Given are => \n\n\tRoll No - %d. \n\n\tName - %s. \n\n\tCity - %s. \n\n\tPercentage - %0.2f.\n",std1.Roll_No,std1.Name,std1.City,std1.Per);

    printf("\n 2nd Student Details Given are => \n\n\tRoll No - %d. \n\n\tName - %s. \n\n\tCity - %s. \n\n\tPercentage - %0.2f.\n",std2.Roll_No,std2.Name,std2.City,std2.Per);

    getch();
    return 0;
}
