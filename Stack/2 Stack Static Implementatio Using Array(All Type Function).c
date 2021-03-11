///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////        ***** DataStructor Stack Static Implementation Using Array.c(Push And Pop And Count And Display Function() )
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
#define Max 5

int Stack[Max];
int TOP = 0;

void Is_Stack_Push(unsigned int Num)
{
    if(Stack_Full())
    {
        printf("\n Stack is Already Full...!!\n");
        return;
    }
    Stack[TOP] = Num;
    TOP++;
}

int Stack_Full()
{
    if(TOP == Max)
    {
        return 1;
    }
    return 0;
}

void Is_Stack_Pop()
{
    if(Stack_Empty())
    {
        printf("\n\n Stack is Already Empty...!! \n We Can Insert New Element");
    }
    else
    {
        printf("\n\n Deleted Element From stack is = %d.",Stack[TOP-1]);
        TOP--;
    }
    return;
}

int Stack_Empty()
{
    if(TOP == 0)
    {
        return 1;
    }
    return 0;
}
//Display Function
void Stack_Display()
{
    if(Stack_Empty())
    {
        printf("\n Stack is Already Empty...!!!");
    }
    else
    {
        int i = 0;
        printf("\n\n Display Current Element in Stack are == >\n");

        for(i=TOP-1;i>=0;i--)
        {
            printf("\t\t\t\t\t Stack Of Element is = |%4d|\n",Stack[i]);
        }
    }
    return;
}

///Stack Count
void Stack_Count_Element()
{
    int cnt = 1;
    while(cnt<TOP)
    {
        cnt++;
    }
    printf("\n Count Of Elements In Stack Are = %d",cnt);
    return;
}

int main()
{
    int Ret = 0;

    //Push Element
    Is_Stack_Push(10);
    Is_Stack_Push(20);
    Is_Stack_Push(30);
    Is_Stack_Push(40);

    //Display Element
    Stack_Display();
    Stack_Count_Element();
    getch();

    //Pop Element
    Is_Stack_Pop();
    Is_Stack_Pop();
    Is_Stack_Pop();
    Stack_Display();
    Stack_Count_Element();

    printf("\n\n Thank You..!!!");
    getch();
    return 0;
}
