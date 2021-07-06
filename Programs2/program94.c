/*Write a recursive program which accept number from user and return
smallest digit
Input : 87983
Output : 3
*/
#include<stdio.h>
int SmallestNo(int iNo)
{
	static int iRem=0,iMin=9;
	if(iNo!=0)
	{
		iRem=iNo%10;
		if(iRem<iMin)
			iMin=iRem;
		iNo=iNo/10;
		SmallestNo(iNo);
	}
	return iMin;
}

int main()
{
	int iNo=0,iRet=0;	
	printf("Enter the no\n");
	scanf("%d",&iNo);
	iRet=SmallestNo(iNo);
	printf("Smallest digit is %d\n",iRet);
	return 0;
}
