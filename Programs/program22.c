//Accept the no from user and count even digit that no.
#include<stdio.h>
int DisplayDigit(int iNo)
{
	int iRem=0,iCnt=0;
	if(iNo<0)
	{
	iNo=-iNo;
	}
	while(iNo>0)
	{
		iRem=iNo%10;
		if((iRem%2)==0)
			iCnt++;
		iNo=iNo/10;
	}
	return iCnt;
}
int main()
{
	int iValue=0,iRet=0;
	printf("Enter the no :");
	scanf("%d",&iValue);
	iRet=DisplayDigit(iValue);
	printf("Total even digits :%d\n",iRet);
	return 0;
}
