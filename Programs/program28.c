//Accept number from user and check whether that no is palindrome or not
#include<stdio.h>
#include<stdbool.h>
bool Checkpalindome(int iNo)
{
	int iRem=0,iRev=0,temp=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	temp=iNo;
	while(iNo>0)
	{
		iRem=iNo%10;
		iRev=(iRev*10)+iRem;
		iNo=iNo/10;
	}
	if(iRev==temp)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	int iNo=0;
	bool bRet=false;
	printf("Enter the no\n");
	scanf("%d",&iNo);
	bRet=Checkpalindome(iNo);
	if(bRet==true)
	{
		printf("palindrome\n");
	}
	else
	{
		printf("not palondrome\n");
	}
	return 0;
}
