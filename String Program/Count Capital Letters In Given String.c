#include<stdio.h>
#include<conio.h>
int main()
{
    char cSrc[50] = {'\0'};
    int Cap_Cnt = 0, i = 0;

    printf("\n Enter A String : ");
    scanf("%[^\n]",&cSrc);

    while(cSrc[i] != '\0')
    {
        if(cSrc[i]>=65 && cSrc[i]<=90)
        {
            Cap_Cnt++;
        }
        i++;
    }

    printf("\n Count Of Capital Letters is = %d",Cap_Cnt);
    printf("\n\n Thank You..!!");

    getch();
    return 0;
}
