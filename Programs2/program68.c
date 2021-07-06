//check whether 3rd ,5th and 7th bit is on or off.
// 1111	1111 1111 1111 1111 1111 1011 1011
//   F	  F    F    F    F   F     B    B

/*
	iNo	 1 1 1 1 0 1 0 1   &
	iMask	 0 1 0 1 0 1 0 0
	iResult	 0 1 0 1 0 1 0 0
*/
#include<stdio.h>
#include<stdbool.h>
bool ChkBit(unsigned int iNo)
{
		unsigned int iMask=0X00000054;
		unsigned int Result=0;
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
	bool bRet=0;
	printf("Enter number\n");
	scanf("%u",&iValue);
	bRet=ChkBit(iValue);
	if(bRet==true)
	{
		printf("3rd,5th and 7th bit is on\n");
	}
	else
	{	
		printf("3rd,5th and 7th bit is off\n");
	}
	
	return 0;
}
