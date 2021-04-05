#include<stdio.h>
#include<conio.h>
int main()
{
    int No1 = 0,No2 = 0,Res = 0;

    printf("\n===============================================================\n");
    printf("\n Enter Any Two Number : ");
    scanf("%d%d",&No1,&No2);
    printf("\n===============================================================\n");

    Res = No1 & No2;

    printf("\n Output Of Bitwise AND between %d & %d = %d.\n",No1,No2,Res);

    printf("\n===============================================================\n");

    printf("\n Thank You..\n");
    printf("\n===============================================================\n");

    getch();
    return 0;
}
