#include<stdio.h>
#include<conio.h>
int main()
{
    char cSrc[20] = "";
    printf("\n Enter A String : ");
    scanf("%[^\n]",&cSrc);

    Rev_Each_Word(cSrc);

    printf("\n After Reversing Each Word => %s",cSrc);

    printf("\n\n Thank You...!!!");

    getch();
    return 0;

}
void Rev_Each_Word(char *cSrc)
{
    int i = 0;
    char *P1 = NULL;
    char *P2 = NULL;
    while(cSrc[i] != '\0')
    {
        if(cSrc[i] == ' ')
        {
            i++;
            continue;
        }
        P1 = cSrc + i;
        while(cSrc[i] != ' ' && cSrc[i] != '\0')
        {
            i++;
        }
        P2 = cSrc + i - 1;
        while(P1 < P2)
        {
            char ch = *P1;
            *P1 = *P2;
            *P2 = ch;
            P1++;
            P2--;
        }
    }
    return;
}
