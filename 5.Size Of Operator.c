///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////        Program For Size Of Operator
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    char ch;
    float F;
    double D;
    long double c;
    unsigned long double x;

    printf("\n #######****_____ SIZEOF OPERATOR _____****#######\n");
    printf("\n======================================================\n");

    printf("\n %d",sizeof(n));
    printf("\n %d",sizeof(ch));
    printf("\n %d",sizeof(F));
    printf("\n %d",sizeof(D));
    printf("\n %d",sizeof(c));
    printf("\n %d",sizeof(x));
    printf("\n======================================================\n");

    getch();
    return 0;
}
