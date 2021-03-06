#include<stdio.h>
#include<conio.h>
int main()
{
   char CSrc[50]="\0";
   printf("\n Enter String : ");
   scanf("%[^\n]",&CSrc);

   ToggleCase(CSrc);

   printf("\n Given Toggle String is = %s",CSrc);
   printf("\n\n Thank You ...!!");
   getch();
   return 0;
}

void ToggleCase(char *CSrc)
{
    int i = 0;
    while(*CSrc != '\0')
    {
        if(i%2==0)
        {
            if(*CSrc >= 'A' && *CSrc <= 'Z')
            {
                *CSrc = *CSrc + 32;
            }
        }
        else
        {
            if(*CSrc >= 'a' && *CSrc <= 'z')
            {
                *CSrc = *CSrc - 32;
            }
        }
        CSrc++;
        i++;
    }
}
