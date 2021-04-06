#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 0,Res = 0;

    printf("\n=======================================================\n");
    printf("\n Enter A Number : ");
    scanf("%d",&No);
    printf("\n=======================================================\n");

    Res = ~No;

    printf("\n Output Of BitWise Complement is %d = %d.\n",No,Res);
    printf("\n=======================================================\n");

    printf("\n Thank You....!!!\n");
    printf("\n=======================================================\n");

    getch();
    return 0;
}
