#include<stdio.h>
#include<conio.h>
int main()
{
    char Str1[20]="\0";
    char Str2[20]="\0";

    printf("\n\t Enter 1st String : ");
    scanf("%[^\n]",&Str1);

    printf("\n\t Enter 2nd String : ");
    scanf("%s",&Str2);

    StrCatJ(Str1,Str2);

    printf("\n\t String After Concat is = %s\n",Str1);

    printf("\n\t Thank You...!!");
    getch();
    return 0;
}

void StrCatJ(char *Str1,char *Str2)
{
    while(*Str1 != '\0')
    {
        Str1++;
    }
    while(*Str2 != '\0')
    {
        *Str1=*Str2;
        Str1++;
        Str2++;
    }
    *Str1='\0';
}
