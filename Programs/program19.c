//Accept the no from user and display the digits of that no in reverse order.
#include<stdio.h>
void DisplayDigit(int iNo)
{
	int iRem=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iRem=iNo%10;
		printf("%d",iRem);
		iNo=iNo/10;
	}
	
}
int main()
{
	int iValue=0;
	printf("Enter the no :");
	scanf("%d",&iValue);
	DisplayDigit(iValue);
	return 0;
}
