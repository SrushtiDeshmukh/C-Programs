/* Write a recursive program which accept number from user and display below
pattern.
Input : 5
Output : 5 * 4 * 3 * 2 * 1 *
*/
#include<stdio.h>

void Display(int iNo)
{
	if(iNo>=1)
	{
		printf("%d\t*\t",iNo);
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


