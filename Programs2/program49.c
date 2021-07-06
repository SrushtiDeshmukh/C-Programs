/*Write a program which checks whether 7th & 15th & 21st & 28th bit
is On or OFF.*/
#include<stdio.h>
#include<stdbool.h>
bool ChkBit(unsigned int iNo)
{
	unsigned int iMask=0X08104040;
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
		printf("7th,15th,21st & 28th bits are on\n");
	else
		printf("7th,15th,21st & 28th bits are off\n");
	return 0;
}
