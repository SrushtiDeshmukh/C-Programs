/*Write a program which checks whether first and last bit is On or
OFF. First bit means bit number 1 and last bit means bit number 32.*/
#include<stdio.h>
#include<stdbool.h>
bool ChkBit(unsigned int iNo)
{
	unsigned int iMask=0X80000001;
	int iResult=0;
	iResult= iNo & iMask;
	if(iResult==iMask)
		return true;
	else
		return false;
}
int main()
{
	unsigned int iValue=0;
	bool bRet=false;
	printf("Enter the no\n");
	scanf("%d",&iValue);
	bRet=ChkBit(iValue);
	if(bRet==true)
		printf("1st & last bits are on\n");
	else
		printf("1st & last bits are off\n");
	return 0;
}
