//Accept no from user and returns multiplication of that digits
#include<stdio.h>
int MultDigit(int iNo)
{
	int iRem=0,iMult=1;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iRem=iNo%10;
		if(iRem!=0)
		{
			iMult=iMult*iRem;
		}
		iNo=iNo/10;
	}
	return iMult;
}
int main()
{
	int iNo=0,iRet=0;
	printf("Enter the no\n");
	scanf("%d",&iNo);
	iRet=MultDigit(iNo);
	printf("multiplication is %d\n",iRet);
	return 0;
}
