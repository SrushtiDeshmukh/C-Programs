/*Write a recursive program which display below pattern.
Input : 6
Output : a b c d e f
*/
#include<stdio.h>
void Display(int iNo)
{
	static char ch='a';
	if(iNo>0)
	{
		printf("%c\t",ch);
		iNo--;
		ch++;
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
