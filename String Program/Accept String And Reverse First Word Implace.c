#include<stdio.h>
#include<conio.h>
int main()
{
    char cSrc[20] = "";
    printf("\n Enter A String : ");
    //scanf("%[^\n]",&cSrc);
    gets(cSrc);
    Rev_First_Word(cSrc);

    printf("\n After Reversing First Word of string is = %s",cSrc);
    printf("\n\n Thank You..!!!");
    getch();
    return 0;
}

void Rev_First_Word(char *iStr)
{
    int i = 0;
    char*P1 = NULL;
    char*P2 = NULL;

    while(iStr[i]!='\0')
    {
        if(iStr[i]==' ' || iStr[i]=='.' || iStr[i]==',')
        {
            i++;
            continue;
        }
        P1 = iStr + i;

        while(iStr[i]!=' ' && iStr[i]!='\0' && iStr[i]!='.' && iStr[i]!=',')
        {
            i++;
        }
        P2 = iStr+i-1;
        while(P1<P2)
        {
            char ch = *P1;
            *P1 = *P2;
            *P2 = ch;
            P1++;
            P2--;
        }
        break;
    }
    return;
}
