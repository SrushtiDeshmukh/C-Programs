/*Write a recursive program which accept number from user and return its
product of digits.
*/
#include<stdio.h>
int Product(int iNo)
{
	static int iMult=1,iRem=0;
	if(iNo!=0)
	{
		iRem=iNo%10;
		iMult=iMult*iRem;
		iNo=iNo/10;
		Product(iNo);
	}
	return iMult;
}

int main()
{	
	int iNo=0,iRet=0;	
	printf("Enter the no\n");
	scanf("%d",&iNo);
	iRet=Product(iNo);
	printf("Product is %d\n",iRet);
	return 0;
}
