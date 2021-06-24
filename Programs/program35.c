//Accept one no and return difference between its factor and non factor
#include<stdio.h>
int Difference(int iNo)
{
	int i=0,iSum1=0,iSum2=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(i=1;i<=iNo;i++)
	{
		if((iNo%i)==0)
		{
			iSum1=iSum1+i;
		}
		else
		{
			iSum2=iSum2+i;
		}
	}
	return iSum1-iSum2;
}
int main()
{
	int iNo=0,iRet=0;
	printf("Enter the no\n");
	scanf("%d",&iNo);
	iRet=Difference(iNo);
	printf("Difference is %d\n",iRet);
	return 0;
}
