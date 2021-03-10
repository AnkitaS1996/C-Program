#include<stdio.h>
#include<conio.h>
int main()
{
    int No=21;
    No=21;
    int * iABC = NULL;
    iABC = &No;

    printf("\n_________________***** Simple Pointer *****_______________________________\n");

    printf("\n============================================================\n");

    printf("\n %d",No);
    printf("\n %d",&No);
    printf("\n %d",iABC);
    printf("\n %d",&iABC);
    printf("\n %d",*iABC);
    printf("\n %d",&(*iABC));

    printf("\n Thank You");
    printf("\n============================================================\n");

}
