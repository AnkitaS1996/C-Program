#include<stdio.h>
#include<conio.h>
int main()
{
    char Src[20]="\0";
    printf("\n\t Enter String : ");
    scanf("%[^\n]",&Src);

    Str_Upper_X(Src);

    printf("\n\t Given String is Upper case is = %s\n",Src);

    printf("\n\t Thank You....!!!");
}

void Str_Upper_X(char *Src)
{
    while(*Src != '\0')
    {
        if(*Src >= 'a' && *Src <= 'z')
        {
            *Src = *Src - 32;
        }
        Src++;
    }
}
