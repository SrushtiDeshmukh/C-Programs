
//Accept no from user and accept one bit no to check that bit is on or off.
/*
	iNo	 0 1 0 1 0 1 0 0   &
	iMask	 0 1 0 1 0 1 0 0
	iResult	 0 1 0 1 0 1 0 0
*/
#include<stdio.h>
#include<stdbool.h>
bool ChkBit(unsigned int iNo,int iPos)
{
		unsigned int iMask=0X00000001;
		unsigned int Result=0;
		if((iPos<1)||(iPos>32))
		{
			return false;
		}
		iMask=iMask<<(iPos-1);
		Result=iNo & iMask;
		if(Result==iMask)
		{
			return true;
		}
		else
		{
			return false;	
		}
}
int main()
{
	unsigned int iValue=0;
	int iPos;
	bool bRet=0;
	printf("Enter number\n");
	scanf("%u",&iValue);
	printf("Enter the bit\n");
	scanf("%d",&iPos);
	bRet=ChkBit(iValue,iPos);
	if(bRet==true)
	{
		printf("%d bit is on\n",iPos);
	}
	else
	{	
		printf("%d bit is off\n",iPos);
	}
	
	return 0;
}
