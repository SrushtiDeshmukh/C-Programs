//Accept no and count no of on bits without checking its 1 or 0.
#include<stdio.h>
int CountOn(unsigned int iNo)
{
		int iCnt=0;
		while(iNo>0)
		{
			iCnt=iCnt+(iNo%2);
			iNo=iNo/2;
		}
	return iCnt;
}
int main()
{
	unsigned int iValue=0;
	int iRet=0;
	printf("Enter number\n");
	scanf("%u",&iValue);
	iRet=CountOn(iValue);
	printf("Number of on bits are %d\n",iRet);
	return 0;
}
