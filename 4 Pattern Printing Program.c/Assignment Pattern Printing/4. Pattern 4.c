//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///	4.	A
////	B	B
////	C	C 	C
////	D 	D 	D 	D
////	E	E	E 	E 	E
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

void Pattern(int);

int main()
{
	int No = 0;
	printf("\n Enter Number To Print Pattern : ");
	scanf("%d",&No);
	Pattern(No);
	printf("\n Thank You....!!!");
	getch();
	return 0;
}

void Pattern(int iNo)
{
	int i = 0, j = 0;
	char ch = 'A';

	for(i = 1; i <= iNo; i++)
	{
		for(j = 1; j <= iNo; j++)
		{
			if(i==j || j<=i)
			{
				printf(" %c",ch);		
			}
			else
			{
				printf("   ");
		
			}	
		}
		ch++;
		printf("\n");
		
	}	
}