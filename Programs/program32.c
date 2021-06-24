//Accept number from user and return min digit
#include<stdio.h>

int MinDigit(int iNo)
{
	int iRem=0,iMin=9;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iRem=iNo%10;				
		if(iRem<iMin)
		{
			iMin=iRem;
			if(iMin==0)
			{
				break;
			}
		}
		iNo=iNo/10;
	}
	return iMin;
}
int main()
{
	int iNo=0,iRet=0;
	printf("Enter the no\n");
	scanf("%d",&iNo);
	iRet=MinDigit(iNo);
	printf("Minimum digit is %d\n",iRet);
	return 0;
}	
