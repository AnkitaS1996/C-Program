                            ////////////////////////////////////////////////////////////////////////////////////////
                            ///////$$$$$$ Dynamic Memory Allocation Using Pointers $$$$$$//////////
                            //////////////////////////// #### MALLOC ####/////////////////////////


#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>

int main()
{
            int cnt=0,i=0,Search=0;
            int * ptr = NULL;

            printf("\n_________________*****  Malloc Pointer *****_______________________________\n");

            printf("\n============================================================\n");

            printf("\n Enter How Many Count Of Elements : ");
            scanf("%d",&cnt);

            ptr=(int*)malloc(cnt *sizeof(int));

            //Accepting values
            for(i=0;i<cnt;i++)
            {
                    printf("\n Enter value of %d = ",i+1);
                    scanf("%d",&ptr[i]);
            }

            //Searching Element
            printf("\n Search Element = ");
            scanf("%d",&Search);

            for(i=0 ; i<cnt ; i++)
            {
                    if(Search == ptr[i])
                    {
                            break;
                    }
            }

            if(i==cnt)
            {
                    printf("\n Not Found");
            }
            else
            {
                    printf("\n Found At Location %d ",i+1);
            }

            getch();
            return 0;
}
