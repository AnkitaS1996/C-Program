#include<stdio.h>
#include<conio.h>
int main()
{
    char cSrc[50]="";
    int SP_Cnt = 0;

    printf("\n Enter A String : ");
    gets(cSrc);
    //scanf("%[^\n]"&cSrc);

    SP_Cnt = Special_Symbol_Cnt(cSrc);

    printf("\n Special Symbols Count in given String is = %d",SP_Cnt);

    printf("\n\n Thank You..!!!");

    getch();
    return 0;
}

int Special_Symbol_Cnt(char *Str)
{
    int Cnt = 0,i = 0;
    while(Str[i]!='\0')
    {
        if(!((Str[i]>='A'&&Str[i]<='Z')||(Str[i]>='a'&&Str[i]<='z')||(Str[i]>='0'&&Str[i]<='9')||(Str[i]==' ')))
        {
            Cnt++;
        }
        i++;
    }
    return Cnt;
}
