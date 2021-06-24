//Accept the no from user and return addition of all digits.
#include<stdio.h>
int DisplayDigit(int iNo)
{
	int iRem=0,iSum=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iRem=iNo%10;
		iSum=iSum+iRem;
		iNo=iNo/10;
	}
	return iSum;
}
int main()
{
	int iValue=0,iRet=0;
	printf("Enter the no :");
	scanf("%d",&iValue);
	iRet=DisplayDigit(iValue);
	printf("Additon of all digits is %d\n",iRet);
	return 0;
}
