/*Write a program which accept one number from user and on its first 4
bits. Return modified number.
Input :10
Output :15
*/
#include<stdio.h>
unsigned OffBit(unsigned int iNo)
{
	unsigned int iMask=0X000000F;
	unsigned int Result=0;
	Result=iNo | iMask;
	return Result;
}
int main()
{
	unsigned int iValue=0;
	unsigned int iRet=0;
	printf("Enter the number\n");
	scanf("%u",&iValue);
	iRet=OffBit(iValue);
	printf("Number after updation is %u\n",iRet);	

	return 0;
}

