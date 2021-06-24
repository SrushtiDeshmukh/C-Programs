//Accept the no from user and return addition of its factors.
#include<stdio.h>
int FactorSum(int iNo)
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
	return iSum;
	printf("\n");
}
int main()
{
	int iValue=0,iRet=0;
	printf("Enter the no :");
	scanf("%d",&iValue);
	iRet=FactorSum(iValue);
	printf("summation is %d\n",iRet);
	return 0;
}
