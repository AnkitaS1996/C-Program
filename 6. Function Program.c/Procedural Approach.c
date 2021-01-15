#include<stdio.h>
#include<conio.h>

int Add(int No1,int No2)
{
            int iAns=0;
            iAns=No1+No2;
            return iAns;
}

int Sub(int No1,int No2)
{
            int iAns=0;
            iAns=No1-No2;
            return iAns;
}

int main()
{
            int iNum1,iNum2,iRes;

            printf("Enter 2 Numbers: ");
            scanf("%d%d",&iNum1,&iNum2);

            iRes=Add(iNum1,iNum2);
            printf("Addition is = %d",iRes);

            iRes=Sub(iNum1,iNum2);
            printf("\n Subtraction is = %d",iRes);

            getch();
            return 0;
}


