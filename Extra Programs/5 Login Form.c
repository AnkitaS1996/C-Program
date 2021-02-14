#include<stdio.h>
#include<conio.h>
#include<string.h>
void Login(char *UserName,char *Password)
{
                if(strcmp(*UserName, "Ankita") == 0)
                {
                        if(strcmp(*Password, "A123") == 0)
                        {
                                    printf("\n Login Successful..!!!");
                                    printf("\n==============================================\n");
                        }
                        else
                        {
                                    printf("\n Invalid UserName And Password....!!");
                                    printf("\n==============================================\n");
                        }
                }
                else
                {
                      printf("\n Invalid UserName.....!!!!");
                      printf("\n==============================================\n");
                }
}
int main()
{
            char UName[8] = "";
            char Pass[8] = "";

            printf("\n###############******* Login Form *******###############\n");

            printf("\n==============================================\n");
            printf("\n Enter UserName : ");
            scanf("%s",&UName);
            printf("\n==============================================\n");

            printf("\n==============================================\n");
            printf("\n Enter Password :");
            scanf("%s",&Pass);
            printf("\n==============================================\n");

            Login(UName,Pass);

            getch();
            return 0;
}
