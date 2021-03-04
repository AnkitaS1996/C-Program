#include<stdio.h>
#include<conio.h>
int main()
{
    char Src[20]="\0";

    printf("\n\t Enter String : ");
    //scanf("%s",&Src);
    scanf("%[^\n]",&Src);

    Str_Lower_X(Src);

    printf("\n\t Given String is Lower Case is = %s\n",Src);

    printf("\n\t Thank You..!!!");

    getch();
    return 0;
}

void Str_Lower_X(char *Src)
{
    while(*Src != '\0')
    {
        if(*Src >= 'A' && *Src <= 'Z')
        {
            *Src = *Src + 32;
        }
        Src++;
    }
}
