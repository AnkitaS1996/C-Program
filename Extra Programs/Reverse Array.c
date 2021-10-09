#include<stdio.h>
#include<conio.h>
#include<malloc.h>

void Reverse_Array(int *Arr,int No)
{
    int i = 0;

    for(i = No-1;i >= 0;i--)
    {
        printf("\n %d",Arr[i]);
    }

}
int main()
{
    //int Arr[];
    int Size = 0,i=0;
    int *Arr;
    //ptr = &Arr[0];


    printf("\n Enter Size of array : ");
    scanf("%d",&Size);

    Arr = (int*)malloc(Size*sizeof(int));

    for(i=0;i < Size;i++)
    {
        scanf("%d",&Arr[i]);
    }

    Reverse_Array(Arr,Size);

    _getch();
    return 0;

}
