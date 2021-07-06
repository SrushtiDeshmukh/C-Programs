/*Write a recursive program which display below pattern.
Input : 5
Output : * * * * *
*/
#include<stdio.h>

void Display(int iNo)
{
	if(iNo>=1)
	{
		printf("*\t");
		iNo--;
		Display(iNo);
	}
	else
	{
		printf("\n");
	}
}

int main()
{
	int iNo=0;
	printf("Enter the no\n");
	scanf("%d",&iNo);
	Display(iNo);
	return 0;
}
