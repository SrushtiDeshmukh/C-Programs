/*Write a program which accept one number from user and toggle contents
of first and last nibble of the number. Return modified number. (Nibble is a
group of four bits)*/
#include<stdio.h>
unsigned  int ToggleNibble(unsigned int iNo)
{
	unsigned int iMask=0xf000000f;
	int Result=0;
	Result=iNo ^ iMask;
	return Result;
}
int main()
{
	unsigned int iValue=0;
	unsigned int iRet=0;
	printf("Enter the number\n");
	scanf("%u",&iValue);
	iRet=ToggleNibble(iValue);
	printf("Number after updation is %d\n",iRet);	
	
	return 0;
}	
