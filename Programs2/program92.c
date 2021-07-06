/* Write a recursive program which accept number from user and return
largest digit
Input : 87983
Output : 9
*/
#include<stdio.h>
int LargestNo(int iNo)
{
	static int iRem=0,iMax=0;
	if(iNo!=0)
	{
		iRem=iNo%10;
		if(iRem>iMax)
			iMax=iRem;
		iNo=iNo/10;
		LargestNo(iNo);
	}
	return iMax;
}

int main()
{
	int iNo=0,iRet=0;	
	printf("Enter the no\n");
	scanf("%d",&iNo);
	iRet=LargestNo(iNo);
	printf("Largest digit is %d\n",iRet);
	return 0;
}
