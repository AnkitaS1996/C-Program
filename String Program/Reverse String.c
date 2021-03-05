#include<stdio.h>
#include<conio.h>
int main()
{
    char Source[20]="\0";

    printf("\n Enter String : ");
    scanf("%[^\n]",&Source);

    Str_Rev(Source);
    printf("\n Reverse string is = %s.",Source);

    printf("\n Thank You..!!");
    getch();
    return 0;
}
void Str_Rev(char *Source)
{
    char *des="\0";
    int len = 0;
    char ch = '\0';
    len = strlenX(Source);
    des = Source + (len-1);
    char Ch="\0";

    while(len/2>0)
    {
        ch=*Source;
        *Source = *des;
        *des=ch;
        Source++;
        des--;
        len--;
    }
}
int strlenX(char *ptr)
{
    int i=0;
    while(*ptr != '\0')
    {
        i++;
        ptr++;
    }
    *ptr='\0';
    return i;
}


