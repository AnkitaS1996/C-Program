#include<stdio.h>
#include<conio.h>
int main()
{
    char Name[20]="";
    int len = 0;
    printf("\n Enter String To Calculate its Length : ");
    scanf("%[^\n]",&Name);
    //len=0;
    for(len=0;Name[len]!='\0';len++);
    /*while(Name[len]!='\0')
    {
        len++;
    }*/
    printf("\n Length of %s is = %d.",Name,len);
    getch();
    return 0;
}
