//Accept the no from user and check whether it is prime or not.
#include<stdio.h>
#include<stdbool.h>
bool CheckPrime(int iNo)
{
	int i=0,iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}

	for(i=2;i<=(iNo/2);i++)     		
	{
		if((iNo%i)==0)
		{
			break;
		}
	}
	if(i==(iNo/2)+1)
		return true;
	else 
		return false;
}
int main()
{
	int iValue=0,iRet=0;
	printf("Enter the no :");
	scanf("%d",&iValue);
	iRet=CheckPrime(iValue);
	if(iRet==1)
	printf("no is prime no\n");
	else 
	printf("no is not a prime no\n");
	return 0;
}

/*	for(i=1;i<=iNo;i++)     		
	{
		if((iNo%i)==0)
		{
			iCnt++;
		}
	}
	if(iCnt==2)
	return true;
	else 
	return false;
*/
