/*Write a program which accept number from user and return difference between
summation of all its factors and non factors.
Input : 10
Output :-29	(8 - 37)	
*/
#include<stdio.h>
int FactDiff(int iNo)
{
	int i=0,iSum1=0,iSum2=0;
	for(i=1;i<iNo;i++)
	{
	if((iNo%i)==0)
	iSum1=iSum1+i;
	else
	iSum2=iSum2+i;
	}
	return iSum2-iSum1;
	
}
int main()
{
	int iValue = 0,iRet=0;
	printf("Enter number=");
	scanf("%d",&iValue);
	iRet=FactDiff(iValue);
	printf("%d\n ",iRet);
	return 0;
}

