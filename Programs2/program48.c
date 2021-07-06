/*Write a program which checks whether 15th bit is On or OFF.
*/
#include<stdio.h>
#include<stdbool.h>
bool ChkBit(unsigned int iNo)
{
	unsigned int iMask=0X00004000;
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
		printf("15th bit is on\n");
	else
		printf("15th bit is off\n");
	return 0;
}
