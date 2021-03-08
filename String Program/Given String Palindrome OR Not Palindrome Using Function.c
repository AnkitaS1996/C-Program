///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// Statements = Given String Palindrome Or Not Palindrome Using Function
///      INPUT = AddbA
///     Output = AbddA
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>

int Str_Palindrome(char*);

int main()
{
    char cSrc[20]="";
    int Res = 0;
    printf("\n Enter String : ");
    //gets(cSrc);           // OR
    scanf("%[^\n]",&cSrc);

    Res = Str_Palindrome(cSrc);

    if(Res==1)
    {
        printf("\n Given String Palindrome...!!");
    }
    else
    {
        printf("\n Given String is Not Palindrome..!!");
    }
    getch();
    return 0;
}

int Str_Palindrome(char *cSrc)
{
    int i = 0,j = 0;
    while(cSrc[j]!='\0')
    {
        j++;
    }
    j=j-1;
    while(i<j)
    {
        if(cSrc[i]!=cSrc[j])
        {
            break;
        }
        i++;
        j--;
    }
    if(i>=j)
    {
        return 1;
    }
    return 0;
}
