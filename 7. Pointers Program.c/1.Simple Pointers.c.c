#include<stdio.h>
#include<conio.h>
int main()
{
    int No=17;
    int * Nump=&No;

    printf("\n---------------------- $$$$ Simple Single * Pointer $$$$ ------------------------------------ \n");

    printf("\n============================================================\n");

    printf("\n \n Value of Number  = %d",No);
    printf("\n \n address of Number  = %d",&No);
    printf("\n \n Value of Number using Pointer  = %d",*Nump);
    printf("\n \n Address of Number using Pointer = %d",&(*Nump));
    printf("\n \n Value of pointer Variable  =  %d",Nump);
    printf("\n \n Address of Pointer Variable =  %d",&Nump);

    printf("\n============================================================\n");

    printf("\n Thank You");

    printf("\n============================================================\n");

    getch();
    return 0;
}
