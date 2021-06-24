//Accept the no from user and check whether it is perfect or not.
#include<stdio.h>
#include<stdbool.h>
bool CheckPerfect(int iNo)
{
	int i=0,iSum=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(i=1;i<=(iNo/2);i++)     		
	{
		if((iNo%i)==0)
		{
			iSum=iSum+i;
		}
	}
	if(iSum==iNo)
		return true;
	else 
		return false;
}	
int main()
{
	int iValue=0,iRet=0;
	printf("Enter the no :");
	scanf("%d",&iValue);
	iRet=CheckPerfect(iValue);
	if(iRet==1)
		printf("no is perfect no\n");
	else 
		printf("no is not perfect no\n");
	return 0;
}
