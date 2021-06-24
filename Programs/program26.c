//Accept number from user and return its reverse number
#include<stdio.h>
int Reverse(int iNo)
{
	int iRem=0,iRev=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iRem=iNo%10;
		iRev=(iRev*10)+iRem;
		iNo=iNo/10;
	}
	return iRev;
}
int main()
{
	int iNo=0,iRet=0;
	printf("Enter the no\n");
	scanf("%d",&iNo);
	iRet=Reverse(iNo);
	printf("reverse of given no is %d\n",iRet);
	return 0;
}
