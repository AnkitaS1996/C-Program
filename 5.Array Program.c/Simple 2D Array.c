#include<stdio.h>
#include<conio.h>
int main()
{
        int No [3][5];
        printf("\n ----------------------- $$$$  Simple  2D Array .C $$$$ ---------------------------------\n");

        // Elements of 1st row
        printf("\n=========================================================\n");

        printf("\n 1st Elements of row => ");

        printf("\n \n Enter 1st element is = ");
        scanf("%d",&No[0][0]);

        printf("\n Enter 2nd element is = ");
        scanf("%d",&No[0][1]);

        printf("\n Enter 3rd elements is = ");
        scanf("%d",&No[0][2]);

        printf("\n Enter 4th elements is = ");
        scanf("%d",&No[0][3]);

        printf("\n Enter 5th elements is = ");
        scanf("%d",&No[0][4]);

        printf("\n=========================================================\n");


        // Elements of 2nd row
        printf("\n=========================================================\n");

        printf("\n 2nd Elements of row = > ");
        printf("\n=========================================================\n");

        printf("\n \n Enter 1st element is = ");
        scanf("%d",&No[1][0]);

        printf("\n Enter 2nd element is = ");
        scanf("%d",&No[1][1]);

        printf("\n Enter 3rd elements is = ");
        scanf("%d",&No[1][2]);

        printf("\n Enter 4th elements is = ");
        scanf("%d",&No[1][3]);

        printf("\n enter 5th elements is = ");
        scanf("%d",&No[1][4]);

        printf("\n=========================================================\n");

        // Elements of 3rd row
        printf("\n=========================================================\n");

        printf("\n 3rd Elements of row = > ");

        printf("\n \n Enter 1st elements is = ");
        scanf("%d",&No[2][0]);

        printf("\n Enter 2nd element is = ");
        scanf("%d",&No[2][1]);

        printf("\n Enter 3rd element is = ");
        scanf("%d",&No[2][2]);

        printf("\n Enter 4th elements is = ");
        scanf("%d",&No[2][3]);

        printf("\n Enter 5th elements is = ");
        scanf("%d",&No[2][4]);

        printf("\n=========================================================\n");

        getch();
        system("cls");

        //Display 1st Element of row

        printf("\n=========================================================\n");

        printf("\n Display 1st Element of row");
        printf("\n\t  |   \t  %d   \t  %d   \t  %d   \t  %d   \t  %d |",No[0][0],No[0][1],No[0][2],No[0][3],No[0][4]);

        printf("\n=========================================================\n");

        //printf("| \n \t 1st element=%d.  \t \n 2nd element=%d.  \t \n 3rd element=%d.  \t \n 4th element=%d.  \t \n 5th element=%d.|",No[0][0],No[0][1],No[0][2],No[0][3],No[0][4]);

        //Display 2nd Element of row
        printf("\n=========================================================\n");

        printf("\n Display 2nd Element of row");
        printf("\n\t  |   \t  %d   \t  %d   \t  %d   \t  %d   \t  %d |",No[1][0],No[1][1],No[1][2],No[1][3],No[1][4]);

        printf("\n=========================================================\n");

        //printf("| \n \t 1st element=%2=d.  \t \n 2nd element=%d.  \t \n 3rd element=%d.  \t \n 4th element=%d.  \t \n 5th element=%d.|",No[1][0],No[1][1],No[1][2],No[1][3],No[1][4]);

        //Display 3rd Element of row

        printf("\n=========================================================\n");

        printf("\n Display 3rd Element of row");
        printf("\n\t  |   \t  %d   \t  %d   \t  %d   \t  %d   \t  %d |",No[2][0],No[2][1],No[2][2],No[2][3],No[2][4]);

        printf("\n=========================================================\n");

        //printf("| \n \t 1st element=%d.  \t \n 2nd element=%d.  \t |\n 3rd element=%d.  \t \n 4th element=%d.  \t \n 5th element=%d.|",No[2][0],No[2][1],No[2][2],No[2][3],No[2][4]);

        getch();
        return 0;


}
