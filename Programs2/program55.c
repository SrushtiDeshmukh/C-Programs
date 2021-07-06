/* Write a program which accept one number from user and check whether
9th or 12th bit is on or off.
*/
#include<stdio.h>
#include<stdbool.h>
bool ChkBit(unsigned int iNo)
{
	unsigned int iMask=0X00000900;
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
		printf("9th & 12th bits are on\n");
	else
		printf("9th & 12th bits are off\n");
	return 0;
}
