/*Write a program which accept one number from user and off 7th and 10th
bit of that number. Return modified number.
Input :577
Output :1
*/
// 1111	1111 1111 1111 1111 1101 1011 1111
//   F	  F    F    F    F   D     B    F
#include<stdio.h>
unsigned OffBit(unsigned int iNo)
{
	unsigned int iMask=0XFFFFFDBF;
	unsigned int Result=0;
	Result=iNo & iMask;
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

