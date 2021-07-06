//Accept no from user and also accept 2 bits position and check that both is on or off

/*
	iNo	 0 1 0 1 0 1 0 0   &
	iMask	 0 1 0 1 0 1 0 0
	iResult	 0 1 0 1 0 1 0 0
*/
#include<stdio.h>
#include<stdbool.h>
bool ChkBit(unsigned int iNo,int iPos1,int iPos2)
{
		unsigned int iMask1=0X00000001;
		unsigned int iMask2=0X00000001;
		unsigned int Result=0,iTemp=0;
		if((iPos1<1)||(iPos1>32)||(iPos2<1)||(iPos2>32))
		{
			return false;
		}
		iMask1=iMask1<<(iPos1-1);
		iMask2=iMask2<<(iPos2-1);
		iTemp=iMask1 | iMask2;
		Result=iNo & iTemp;
		if(Result==iTemp)
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
	int iPos1=0,iPos2=0;
	bool bRet=0;
	printf("Enter number\n");
	scanf("%u",&iValue);
	printf("Enter first bit\n");
	scanf("%d",&iPos1);
	printf("Enter second bit\n");
	scanf("%d",&iPos2);
	bRet=ChkBit(iValue,iPos1,iPos2);
	if(bRet==true)
	{
		printf("%d & %d bit is on\n",iPos1,iPos2);
	}
	else
	{	
		printf("%d & %d bit is off\n",iPos1,iPos2);
	}
	
	return 0;
}
