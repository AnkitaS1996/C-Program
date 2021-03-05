#include<stdio.h>
#include<conio.h>
int main()
{
    char Source[20]="\0";
    char Dest[20]="Kolhapur";

    printf("\n\t Enter String To Copy : \n\t\t\t");
    scanf("%[^\n]",&Source);

    printf("\n\t Destination String Before Copy = %s\n\n",Dest);

    Str_Cpy(Source,Dest);

    printf("\n\t Destination String After Copy = %s\n\n",Dest);
    getch();
    return 0;
}
void Str_Cpy(char *Src,char *Dest)
{
    while(*Src != '\0')
    {
        *Dest = *Src;
        Src++;
        Dest++;
    }
    *Dest='\0';
}
