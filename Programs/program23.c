//Accept the no from user and count even digit that no.
#include<stdio.h>
int EvenDigit(int iNo)
{
	int iCnt=0;
	if(iNo<0)
	{
	iNo=-iNo;
	}
	while(iNo>0)
	{

		if(((iNo%10)%2)==0)
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
	iRet=EvenDigit(iValue);
	printf("no of even digits in that no is %d\n",iRet);
	return 0;
}
