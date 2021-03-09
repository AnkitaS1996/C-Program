#include<stdio.h>
#include<conio.h>
int main()
{
    char cSrc[50]= {'\0'};
    int S_Cnt = 0,i = 0;

    printf("\n Enter A String : ");
    scanf("%[^\n]",&cSrc);

    while(cSrc[i]!='\0')
    {
        if(cSrc[i] >= 'a' && cSrc[i] <= 'z')
        {
            S_Cnt++;
        }
        i++;
    }

    printf("\n Count Of Small Letters Given String is = %d",S_Cnt);
    getch();
    return 0;
}
