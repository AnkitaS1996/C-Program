#include<stdio.h>
#include<conio.h>
int main()
{
    int No1 = 0,No2 = 0,Res = 0;

    printf("\n=======================================================\n");
    printf("\n Enter Any Two Numbers : ");
    scanf("%d%d",&No1,&No2);

    printf("\n=======================================================\n");

    Res = No1^No2;

    printf("\n Output of Bitwise XOR is = %d.\n",Res);

    printf("\n=======================================================\n");
    printf("\n Thank You....!!!\n");

    printf("\n=======================================================\n");
    getch();
    return 0;
}
