////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////        ***** DataStructor Stack Static Implementation Using Array.c(Push And Pop Function() )
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
#define MAX 5

int Stack[MAX];
int Top = 0;

void Is_Stack_Push(unsigned int No)
{
    if(Stack_Full())
    {
        printf("\n\n Stack is Already Full..!!\n");
        return;
    }
    Stack[Top]=No;
    printf("\n Inserting Element in Push is = %d.",Stack[Top]);
    Top++;
}

int Stack_Full()
{
    if(Top == MAX)
    {
        return 1;
    }
    return 0;
}

void Is_Stack_POP()
{
    if(Stack_Empty())
    {
        printf("\n Stack is Already Empty...!!!");
    }
    else
    {
        printf("\n\n Deleted Element From Stack is = %d.",Stack[Top-1]);
        Top--;
    }
    return;
}

int Stack_Empty()
{
    if(Top == 0)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int Ret = 0;

    Is_Stack_Push(15);
    Is_Stack_Push(75);
    Is_Stack_Push(47);
    Is_Stack_Push(17);
    Is_Stack_Push(100);
    Is_Stack_Push(12);///Stack is Already Full Cant Inserting Element

    Is_Stack_POP();
    Is_Stack_POP();
    Is_Stack_POP();
    Is_Stack_POP();

    getch();
    return 0;


}
