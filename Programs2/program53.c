/*Write a program which accept one number from user and count number of
ON (1) bits in it without using % and / operator.*/
#include<stdio.h>
#include<stdbool.h>
unsigned int BitCount(unsigned int iNo)
{
	unsigned int iMask=0X00000001;
	int i=0,iCnt=0,iResult=0;
	for(i=1;i<=32;i++)
	{
		iResult=iMask&iNo;
		if(iMask==iResult)
		{
			iCnt++;
		}
		iMask=iMask<<1;
	}
	return iCnt;
}
int main()
{
	unsigned int iValue=0;
	int iRet=0;
	printf("Enter the no\n");
	scanf("%d",&iValue);
	iRet=BitCount(iValue);
	printf("Total on bits are %d\n",iRet);
	return 0;
}
