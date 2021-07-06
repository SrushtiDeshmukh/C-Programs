/*Write a program which accept one number from user and range of
positions from user. Toggle all bits from that range.
Input : 897
	9	13
Toggle all bits from position 9 to 13 of input number ie 879.
*/

#include<stdio.h>
#define UINT unsigned int

UINT ToggleBitRange(UINT iNo, int iStart, int iEnd)
{
	UINT iMask=0x00000001,iResult=0;
	int i=0;
	iMask=iMask<<(iStart-1);
	for(i=iStart;i<=iEnd;i++)
	{
		iResult=iMask ^ iNo;
		iMask=iMask<<1;
	}	
	return iResult;
}

int main()
{
	UINT iNo=0;
	int istart=0,iend=0,iRet=0;
	printf("Enter the no\n");
	scanf("%u",&iNo);
	printf("Enter the range\n");
	scanf("%d %d",&istart,&iend);
	iRet=ToggleBitRange(iNo,istart,iend);
	printf("Number after updation is %u\n",iRet);
	return 0;
}
