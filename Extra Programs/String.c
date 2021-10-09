#include<stdio.h>
#include<conio.h>
#define TRUE 1
#define FALSE 0
int Contains(char *input1,char *input2)
{
    if(input1 == NULL)
    {
        return - 1;
    }
    while(*input1 != '\0')
    {
        if(*input1 == *input2)
        {
            return TRUE;
        }
        input1++;
        input2++;
    }
}
int main()
{
    char str1[20];
    char str2[30];
    int iRet = 0;

    printf("\n Enter Any First String : ");
    scanf("%s",&str1);

    printf("\n Enter Any First String : ");
    scanf("%s",&str2);

    iRet = Contains(&str1,&str2);

    if(iRet == FALSE)
    {
        printf("\n NO");
    }
    else
    {
         printf("\n YES");
    }

    _getch();
    return 0;
}

