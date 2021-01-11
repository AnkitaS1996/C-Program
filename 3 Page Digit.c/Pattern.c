#include<stdio.h>
#include<string.h>

void Display(char *Str,char *Dest)
{

       int i,j;

     strcpy(*Dest,*Str);


       for(i = 0;i < 5;i++)
       {

              for(j = 0;j < 5,*Str != '\0';j++)
              {
                     printf("%c",*Str);
                      *Str++;

              }

              printf("\n");
              *Str = *Dest;
       }
       return;

}

int main()
{
        char cArr[30] = "";
        char Dest[30]="";

       printf("\n Enter String =>");
       scanf("%s",&cArr);


       Display(cArr,Dest);
       return 0;
}
