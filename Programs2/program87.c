/*Write a recursive program which accept number from user and return
summation of its digits.
Input : 879
Output : 24
*/
#include<stdio.h>
int SumDigits(int iNo)
{
	static int iRem=0,iSum=0;
	if(iNo!=0)
	{
		iRem=iNo%10;
		iSum=iSum+iRem;
		iNo=iNo/10;
		SumDigits(iNo);
	}
		return iSum;	
}

int main()
{
	int iNo=0,iRet=0;
	printf("Enter the no\n");
	scanf("%d",&iNo);
	iRet=SumDigits(iNo);
	printf("Sum of digits is %d\n",iRet);
	return 0;
}
