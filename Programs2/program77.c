/*Write a recursive program which display below pattern.
Output : 1 2 3 4 5
*/
#include<stdio.h>

void Display()
{
	static int iNo=1;
	if(iNo<=5)
	{
		printf("%d\t",iNo);
		iNo++;
		Display();
	}
	else
	{
		printf("\n");
	}
}

int main()
{
	Display();
	return 0;
}
