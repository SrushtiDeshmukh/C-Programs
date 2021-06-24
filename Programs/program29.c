//Accept number from user and return max digit
#include<stdio.h>

int MaxDigit(int iNo)
{
	int iRem=0,iMax=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iRem=iNo%10;				
		if(iRem>iMax)
		{
			iMax=iRem;
		}
		iNo=iNo/10;
	}
	return iMax;
}
int main()
{
	int iNo=0,iRet=0;
	printf("Enter the no\n");
	scanf("%d",&iNo);
	iRet=MaxDigit(iNo);
	printf("Maximum digit is %d\n",iRet);
	return 0;
}
