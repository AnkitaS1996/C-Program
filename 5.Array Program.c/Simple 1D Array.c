#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int Arr[5]={25};
    int i=0;
    printf("\n ----------------------- $$$$  Simple Array .C $$$$ -------------------------------------\n");

    printf("\n=========================================================\n");
    //Displaying Array Elements
    printf("\n Value of Elements = > \n \n");

    printf("\n=========================================================\n");

    printf("\n  \nValue of element [0] = %d",i,Arr[0]);
    printf("\n \n Value of element [1] = %d",i,Arr[1]);
    printf("\n \n Value of element [2] = %d",i,Arr[2]);
    printf("\n \n Value of element [3] = %d",i,Arr[3]);
    printf("\n \n Value of element [4] = %d",i,Arr[4]);

    printf("\n=========================================================\n");

    getch();

    printf("\n=========================================================\n");

    system("cls");
    printf("\n=========================================================\n");

    printf("\n Enter Array Elements = > \n ");

    //Accepting Array Elements

    printf("\n=========================================================\n");

    printf("\n Enter 1st element [0] =",i);
    scanf("%d",&Arr[0]);
    printf("\n Enter 2nd element [1] =",i);
    scanf("%d",&Arr[1]);
    printf("\n Enter 3rd element [2] =",i);
    scanf("%d",&Arr[2]);
    printf("\n Enter 4th element [3] =",i);
    scanf("%d",&Arr[3]);
    printf("\n Enter First element [4] =",i);
    scanf("%d",&Arr[4]);

    printf("\n=========================================================\n");

    getch();
    system("cls");

    //Displaying New Array Elements

    printf("\n=========================================================\n");
    printf("\n \n  Display the New Elements : ");
    printf("\n \n Value of 1st Elements  [0] = %d",Arr[0]);
    printf("\n \n Value of 2nd Elements[1] = %d",Arr[1]);
    printf("\n\n Value of 3rd Elements  [2]= %d",Arr[2]);
    printf("\n \n Value of 4th Elements [3] = %d",Arr[3]);
    printf("\n \n Value of 5th Elements [4] = %d",Arr[4]);

    printf("\n \n Thank You");

    printf("\n=========================================================\n");

    getch();
    return 0;
}

