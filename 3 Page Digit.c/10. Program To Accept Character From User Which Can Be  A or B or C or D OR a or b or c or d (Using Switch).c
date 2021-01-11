///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////         Statement = Write program to accept character from user which can be  A or B or C or D OR a or b or c or d.
//////                           ( Use Switch Case ) If user Enters :
///////                                                                                     A/a  =>  print “Welcome”
//////                                                                                      B/b  => print “Good Bye”
//////                                                                                      C/c  =>  print “Have a nice day”
//////                                                                                      D/d =>  print “Good Day”
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
int main()
{
            char ch;
            printf("\n**************************** Accept Character To Print Message ***********************************\n");

            printf("\n======================================================\n");
            printf("\n Enter Any Character : ");
            scanf("%c",&ch);
            printf("\n======================================================\n");

            switch(ch)
            {
                        case 'A':
                        case 'a':
                                  printf("\n Welcome");
                                  printf("\n======================================================\n");
                                  break;
                        case 'B':
                        case 'b':
                                  printf("\n Good Bye");
                                  printf("\n======================================================\n");
                                  break;
                        case 'C':
                        case 'c':
                                  printf("\n Have a Nice Day");
                                  printf("\n======================================================\n");
                                  break;
                        case 'D':
                        case 'd':
                                  printf("\n Good Day");
                                  printf("\n======================================================\n");
                                  break;
                        default:
                                  printf("\n Invalid Character....!!!");
                                  printf("\n======================================================\n");
                                  break;
            }

            printf("\n======================================================\n");
            printf("\n  Thank You....!!!");
            printf("\n======================================================\n");

            getch();
            return 0;
}
