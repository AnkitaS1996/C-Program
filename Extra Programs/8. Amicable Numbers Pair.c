#include<stdio.h>
#include<conio.h>
int main()
{
    int iNo1 = 0,iNo2 = 0,i = 0,j = 0,Sum1 = 0,Sum2 = 0;
    printf("\n Enter Any two numbers : ");
    scanf("%d%d",&iNo1,&iNo2);

    for(i=1;i<iNo1;i++)
    {
        if(iNo1%i==0)
        {
            Sum1 = Sum1 + i;
        }
    }
    for(j=1;j<iNo2;j++)
    {
        if(iNo2%j==0)
        {
            Sum2 = Sum2 + j;
        }
    }

    if((Sum1==iNo2)&&(Sum2==iNo1))
    {
        printf("\n Given Two Number %d & %d is Amicable Number",iNo1,iNo2);
    }
    else
    {
        printf("\n Given Two Number %d & %d are not Amicable Number",iNo1,iNo2);
    }
    getch();
    return 0;
}
