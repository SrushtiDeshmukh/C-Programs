// Accept two nos from user and check whether 2nd no is divisible by 1st no.
#include<stdio.h>
#include<stdbool.h>
int CheckDivisible(int iNo1,int iNo2)
{
	if((iNo1%iNo2)==0)
		return true;
	else
		return false;
}
int main()
{
	int iValue1=0;
	int iValue2=0;
	bool bRet=false;
	printf("Enter the first no\n");
	scanf("%d",&iValue1);
	printf("Enter the second no\n");
	scanf("%d",&iValue2);
	bRet=CheckDivisible(iValue1,iValue2);
	if(bRet==true)
		printf("%d is divisible by %d\n",iValue1,iValue2);
	else
		printf("%d is not divisible by %d\n ",iValue1,iValue2);
	return 0;
}

