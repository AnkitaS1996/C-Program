///////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////   Statement =  ASCII Value To Character
/////////////    Input    =  ASCII Value
/////////////    Output = Equivalent to Given Character
///////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
int main()
{
    int Val = 0;
    printf("\n #######****_____ ASCII Value To Character _____****#######\n");

    printf("\n======================================================\n");

    printf("\n Enter ASCII Value to get its Equivalent Character : ");
    scanf("%d",&Val);

    printf("\n Equivalent Character of %d \t is = \t .%c.",Val,Val);

    printf("\n======================================================\n");

    printf("\n \n Thank You...!!!!!");

    printf("\n======================================================\n");
    getch();
    return 0;
}
