        #include<stdio.h>
        #include<conio.h>
        #include<stdlib.h>

        int main()
        {
            int Arr[5]={25};
            int i=0;

            printf("\n---------------------- $$$$ Simple 1-D Array $$$$ ----------------------------------------- \n");

            //Displaying Array Elements

            printf("\n============================================================\n");

            printf("\n Value of Elements = >  \n");

            for(i=0;i<5;i++)
            {
                 printf("\n \n Value of Roll No %d = %d",i+1,Arr[i]);
            }
            printf("\n============================================================\n");

            getch();
            system ("cls");

            printf("\n============================================================\n");

            printf("\n Enter Array Element = > \n \n");

            printf("\n============================================================\n");

            //Accepting Array Elements

            printf("\n============================================================\n");

            for(i=0;i<5;i++)
            {
                 printf("\n Enter Element [%d] =",i+101);
                 scanf("%d",&Arr[i]);
            }
            printf("\n============================================================\n");
            getch();
            system("cls");


            //Displaying New Array Elements

            printf("\n============================================================\n");

            printf("\n \n Displaying Array Elements :/n /n");

            for(i=0;i<5;i++)
            {
                 printf("\n \n Value of Element %d = %d",i+200,Arr[i]);
            }
            printf("\n============================================================\n");

            printf("\n \n Thank You");

            printf("\n============================================================\n");

            getch();
            return 0;
        }
