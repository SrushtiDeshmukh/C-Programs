//Accept no from user and toggle 3rd bit
// 1111	1111 1111 1111 1111 1111 1011 1011
//   F	  F    F    F    F   F     B    B
#include<stdio.h>
unsigned int toggleBit(unsigned int iNo)
{
		unsigned int iMask=0X00000004;
		unsigned int Result=0;
		Result=iNo ^ iMask;
		return Result;	
}
int main()
{
	unsigned int iValue=0;
	unsigned int iRet=0;
	printf("Enter number\n");
	scanf("%u",&iValue);
	iRet=toggleBit(iValue);
	printf("Number after updation %d\n",iRet);
	return 0;
}
