//Accept one no and one bit and toogle that specific bit only.
// 1111	1111 1111 1111 1111 1111 1011 1011
//   F	  F    F    F    F   F     B    B

/*
	iNo	 0 1 0 1 0 1 0 0   ^
	iMask	 0 1 0 1 0 1 0 0
	iResult	 0 1 0 1 0 1 0 0
*/
#include<stdio.h>

unsigned int ToggleBit(unsigned int iNo,int iPos)
{
		unsigned int iMask=0X00000001;
		unsigned int Result=0;
		if((iPos<1)||(iPos>32))
		{
			return false;
		}
		iMask=iMask<<(iPos-1);
		Result=iNo ^ iMask;
		return Result;
}
int main()
{
	unsigned int iValue=0;
	int iPos;
	int iRet=0;
	printf("Enter number\n");
	scanf("%u",&iValue);
	printf("Enter the bit\n");
	scanf("%d",&iPos);
	iRet=ToggleBit(iValue,iPos);
	printf("Updated No is  %d\n",iRet);
	return 0;
}
