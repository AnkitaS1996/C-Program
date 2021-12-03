#include<stdio.h>
#include<conio.h>

struct stud
{
            char Nm[8];                     // 8
            char City[12];                   // 12
            int R_No;                           //  4
            float Per;                         //   4
};

int main( )
{
            struct stud std;

            printf("\n Size of Structure Object : %d",sizeof(std));     ///28

            _getch();
            return 0;
}
