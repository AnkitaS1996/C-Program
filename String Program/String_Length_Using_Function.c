#include<stdio.h>
#include<conio.h>
int main()
{
    char Name[30] = "";
    int len = 0;
    printf("\n Enter String to Calculate its length : ");
    scanf("%[^\n]",&Name);

    len = Str_Length(Name);

    printf("\n Length of %s = %d",Name,len);
    getch();
    return 0;
}

int Str_Length(char *C_Name)
{
    int i=0;
    while(*C_Name != '\0')
    {
        i++;
        C_Name++;
    }
    return i;
}
