//Accept no from user and count no of on bits in it.
#include<stdio.h>

unsigned int Count(unsigned int iNo)
{
		unsigned int iMask=0X00000001;	// 1 0 1 0 0 1 0 1
		unsigned int Result=0;		// 0 0 0 0 0 0 0 1
		int iCnt=0,i=0;
		for(i=1;i<32;i++)
		{
			Result=iNo&iMask;
			if(Result==iMask)
			{	
				iCnt++;
			}		
		iMask=iMask<<1;
		}
		return iCnt;
}
int main()
{
	unsigned int iValue=0;
	int iRet=0;
	printf("Enter number\n");
	scanf("%u",&iValue);
	iRet=Count(iValue);
	printf("Total on bits No is  %d\n",iRet);
	return 0;
}
