#include<stdio.h>
#include<conio.h>
int main()
{
    int No=0,i=0;
    printf("\n Enter a Number to print Number of '*' : ");
    scanf("%d",&No);

    while(No>i)
    {
        printf(" * ");
        i++;
    }
    getch();
    return 0;
}

