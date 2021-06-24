//Accept number from user and return min digit
#include<stdio.h>
typedef unsigned long int ULOG;
int MinDigit(ULOG iNo)		// unsigned long int is 8 byte ie 64 bits long max value 2 ^ 64
{
	int iRem=0,iMin=9;
	/*if(iNo<0)
	{
		iNo=-iNo;
	}*/
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
	ULOG iNo=0;
	int iRet=0;
	printf("Enter the no\n");
	scanf("%lu",&iNo);
	iRet=MinDigit(iNo);
	printf("Minimum digit is %d\n",iRet);
	return 0;
}	
