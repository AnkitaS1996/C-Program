//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////         Statement =  Write Program To Print Fibonacci Series For Given Range.
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
int main()
{
            int cnt = 0, No1 = 0, No2 = 1, No3 = 0;

            printf("\n**************************** Fibonacci Series For Given Range ***********************************\n");

            printf("\n======================================================\n");
            printf("\n Enter a Count For Fibonacci Series : ");
            scanf("%d",&cnt);
            printf("\n======================================================\n");

            printf("\n\n Fibonacci Series For Expected Range --> ");

            while(cnt >= 1)
            {
                        printf(" %d",No3);

                        No1 = No2;
                        No2 = No3;
                        No3 = No1 + No2;

                        cnt--;
            }
            printf("\n======================================================\n");
            printf("\n  Thank You....!!!");
            printf("\n======================================================\n");
            getch();
            return 0;
}
