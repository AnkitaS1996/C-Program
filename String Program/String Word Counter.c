#include<stdio.h>
#include<conio.h>
int main()
{
    char CSrc[50]="";
    int Cnt = 0;
    printf("\n\t Enter A String : ");
    scanf("%[^\n]",&CSrc);

    Cnt = Word_Count(CSrc);

    printf("\n\t Word Count in String is = %d",Cnt);

    printf("\n\n\t Thank You..!!!");
    getch();
    return 0;
}

int Word_Count(char *CSrc)
{
    int WCnt = 0;
    while(*CSrc != '\0')
    {
        if(WCnt == 0 && *CSrc == '\t')
        {
            CSrc++;
            continue;
        }
        while(*CSrc != ' ' && *CSrc != '\0')
        {
            CSrc++;
        }
        if(*(CSrc-1) != ' ')
        {
            WCnt++;
        }
        CSrc++;
    }
    return WCnt;
}
