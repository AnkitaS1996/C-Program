#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *F1,*F2;

    char ch;

    F1 = fopen("Demo.txt","r");

    if(F1 == NULL)
    {
        printf("\n No Such File exist,can't Open...");
        return - 1;
    }

    F2 = fopen("Demo_JS.txt","w");

    while(1)
    {
        ch = fgetc(F1);

        if(ch == EOF)
        {
            break;
        }
        printf("%c",ch);
        fputc(ch,F2);
    }

    fclose(F1);
    fclose(F2);

    getch();
    return 0;
}
